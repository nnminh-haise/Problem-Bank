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
const int CURRENT_DATE = 6;

void makeInput(int testNumber, ofstream &cout, ofstream &log) {
    ClosedSet n_range(5, 10), value_range(1, 100);

    if (testNumber > 10) {
        n_range = ClosedSet(100, 100000);
        value_range = ClosedSet(1000, 10000);
    }

    int n = randInt(n_range);
    cout << n << endl;
    for (int i = 1; i <= n; ++i) {
        int a = randInt(value_range);
        int b = randInt(value_range);
        int c = randInt(value_range);
        cout << a << " " << b << " " << c << endl;
    }

    return;
}

void makeOutput(ifstream &cin, ofstream &cout, ofstream &log) {

    int n;
    cin >> n;
    vector < vector < int > > f(n, vector < int > (3));
    vector < vector < int > > dp(n, vector < int > (3));

    for (vector < int >& item: f)
        cin >> item[0] >> item[1] >> item[2];

    dp[0] = f[0];

    for (int i = 1; i < n; ++i) {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + f[i][0];
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + f[i][1];
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + f[i][2];
    }

    cout << max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2])) << endl;

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