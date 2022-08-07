#include <bits/stdc++.h>
#include "libraries/Compressor.h"
#include "libraries/PowershellCommand.h"
#include "libraries/GeneratingMethods.h"
#include "libraries/Setting.h"
#include "libraries/SideFunctions.h"

using namespace std;

const string LOG_FILE = "testcase_log.txt";
const string PREVIEW_TESTCASES = "testcases.txt";
const string SETTING_FILE = "setting.jeon";
const string TESTCASE_ZIP = "testcases.zip";
const int CURRENT_DATE = 7;

void makeInput(int testNumber, ofstream &cout, ofstream &log) {
    log << "### Test " << testNumber << endl;
    ClosedSet lengthRange(5, 20);

    if (testNumber > 10) {
        lengthRange = ClosedSet(100, 3000);
    }

    bool flag = randInt(ClosedSet(0, 1));

    log << "Flag: " << flag << endl;

    if (flag) {
        string common_string = randStr(randInt(ClosedSet(5, 10)));
        log << "Common-string: " << common_string << endl;

        int n = randInt(ClosedSet(15, 20));
        int m = randInt(ClosedSet(15, 20));

        string s1, s2;
        s1 = s2 = common_string;

        while (s1.length() < n) {
            int p = randInt(ClosedSet(0, (int)s1.length() - 1));
            string tmp = randStr(1);
            s1.insert(p, tmp);
        }

        while (s2.length() < m) {
            int p = randInt(ClosedSet(0, (int)s2.length() - 1));
            string tmp = randStr(1);
            s2.insert(p, tmp);
        }

        cout << s1 << "\n";
        cout << s2 << "\n";
        log << s1 << endl;
        log << s2 << endl;
    }
    else {
        int n = randInt(lengthRange);
        int m = randInt(lengthRange);
        string s1 = randStr(n);
        string s2 = randStr(m);

        cout << s1 << endl;
        cout << s2 << endl;

        log << s1 << endl;
        log << s2 << endl;
    }

    return;
}

void makeOutput(ifstream &cin, ofstream &cout, ofstream &log) {
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.length();
    int m = s2.length();

    vector < vector < int > > dp(n + 1, vector < int > (m + 1));

    for (int i = 0; i < n; ++i)
        dp[i][0] = 0;
    for (int j = 0; j < m; ++j)
        dp[0][j] = 0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[n][m] << endl;

    log << dp[n][m] << endl;
    return;
}

int main() {
    srand(time(NULL));

    Setting settings("setting.json");

    ofstream logger(LOG_FILE.c_str(), ofstream::trunc);
    ofstream preview(PREVIEW_TESTCASES.c_str(), ofstream::app);

    int number_of_testcases = settings.getNumberOfTestcase();
    for (int test_number = 1; test_number <= number_of_testcases; ++test_number) {
        //  Create notifications in the terminal
        cerr << "\nCreating test " + getFormatedNumber(test_number, settings.getNumberOfTestcase()) + "-th!\n";

        //  Open files for read/write data.
        ofstream input_file ((integerToString(test_number) + ".in" ).c_str(), ofstream::trunc);
        ofstream output_file((integerToString(test_number) + ".out").c_str(), ofstream::trunc);
        ifstream data_file  ((integerToString(test_number) + ".in" ).c_str());

        //  Create problem's input data-set and problem's proper output then write those data into ".in" and ".out" files.
        makeInput(test_number, input_file, logger);
        makeOutput(data_file, output_file, logger);

        //  Closing opened files.
        input_file.close();
        output_file.close();
        data_file.close();

        //  Create a testcases's convenient preview file.
        ifstream data_in ((integerToString(test_number) + ".in" ).c_str());
        ifstream data_out((integerToString(test_number) + ".out").c_str());
        string data = "";

        //  Indicate the current testcases.
        preview << "###Test: " + getFormatedNumber(test_number, settings.getNumberOfTestcase()) << "\n";

        //  write input's data into preview file.
        while (!data_in.eof()) {
            getline(data_in, data);
            preview << data;
        }
        preview << endl;

        //  Divide the input's data and output's data.
        preview <<"---\n";

        //  write output's data into preview file.
        while (!data_out.eof()) {
            getline(data_out, data);
            preview << data;
        }
        preview << endl;

        //  Closing opened files.
        data_in.close();
        data_out.close();
    }
    logger.close();

    //  Check if file "testcases.zip" is exist or not. If exist then remove it.
    if (fileExist(TESTCASE_ZIP))
        removeFile(TESTCASE_ZIP);

    //  Create a path containing files which will be zipped.
    string path = "";
    for (int test_number = 1; test_number <= number_of_testcases; ++test_number) {
        const string in_file = integerToString(test_number) + ".in";
        const string out_file = integerToString(test_number) + ".out";
        path = path + "\"" + in_file + "\", \"" + out_file +"\"" + ((test_number < number_of_testcases) ? ", " : "");
    }

    //  Create a compressor then excecutes it.
    Compressor compressor(path, TESTCASE_ZIP);
    compressor.createCompressor();
    compressor.excecuteCompressor();

    //  Create notifications in the terminal
    cerr << "\nTestcases completed! " << settings.getNumberOfTestcase() << " were created!\n";

    //  Remove temporary files if needed!
    if (settings.getRemoveFileIndicator() == true) {
        //  Create notifications in the terminal
        cerr << "\nRemoving temporary files!\n";

        int number_of_testcases = settings.getNumberOfTestcase();
        for (int test_number = 1; test_number <= number_of_testcases; ++test_number) {
            //  Create notifications in the terminal
            cerr << "Remaining files: " << number_of_testcases - test_number << endl;

            string input_file = integerToString(test_number) + ".in";
            string output_file = integerToString(test_number) + ".out";

            removeFile(input_file);
            removeFile(output_file);
        }

        //  Remove LOG_FILE if it is empty.
        ifstream testcases_log(LOG_FILE.c_str());
        string data = "";
        bool flag = true;
        while (!testcases_log.eof()) {
            getline(testcases_log, data);
            if (data == "") {
                flag = false;
                break;
            }
        }
        // FIXME: This feature is curently having a bug where testcases_log.txt can not be removed because it was open in the same working section of terminal.
        // if (!flag) {
        //     removeFile(LOG_FILE);
        // }

        //  Remove Compressor.ps1 file!
        removeFile("compressor.ps1");
    }

    //  Create notifications in the terminal
    cerr << "\nProblem's suggest ID: " << generateID(CURRENT_DATE) << "\n";

    //  Create notifications in the terminal
    cerr << "\nProgram complete!\n\n";

    return 0;
}