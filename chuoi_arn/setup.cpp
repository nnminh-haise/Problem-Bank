#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
    ClosedSet length_range(5, 100);

    if (testNumber > 10)
        length_range = ClosedSet(500, 1000);

    int n = randInt(length_range);
    int m = randInt(ClosedSet(5, n - 1));

    string s = randStr(n, "AUGX");
    string x = randStr(m, "AUGX");

    cout << s << endl;
    cout << x << endl;

    return;
}

void makeOutput(ifstream& cin, ofstream& cout) {
    string s, x;
    cin >> s >> x;

    int n = x.length(), m = s.length(), count = 0;
    for (int i = 0; i < m - n + 1; ++i) {
        bool flag = true;
        for (int j = 0; j < n; ++j) {
            if (x[j] != s[i + j])
                flag = false;
        }
        if (flag)
            ++count;
    }
    cout << count << endl;

    return;
}

// ! User can modify this function in order to test your code before you begin to create the testcase.
// ! Otherwise please comment the main() function out! The function below may cause function "redefinition" error!

// int main(int agrc, char **agrv) {
//     srand(time(NULL));
//     int test_number = 5;

//     ofstream testcase_input_data_ostream("test.in");
//     ofstream testcase_output_data_ostream("test.out");
//     ifstream testcase_input_date_istream("test.in");

//     makeInput(test_number, testcase_input_data_ostream);
//     makeOutput(testcase_input_date_istream, testcase_output_data_ostream);

//     testcase_input_data_ostream.close();
//     testcase_output_data_ostream.close();
//     testcase_input_date_istream.close();

//     return 0;
// }

#endif