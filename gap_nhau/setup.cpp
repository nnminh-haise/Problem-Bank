#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
    ClosedSet value_range(5, 100);

    if (testNumber > 10)
        value_range = ClosedSet(1000, 1000000000);

    int s1 = randInt(value_range);
    int v1 = randInt(value_range);
    int s2 = randInt(value_range);
    int v2 = randInt(value_range);

    cout << s1 << endl;
    cout << v1 << endl;
    cout << s2 << endl;
    cout << v2 << endl;


    return;
}

void makeOutput(ifstream& cin, ofstream& cout) {
    int s1, v1, s2, v2;

    cin >> s1 >> v1 >> s2 >> v2;

    int res = (s1 - s2) / (v2 - v1);
    if (res >= 0)
        cout << res << endl;
    else
        cout << -1 << endl;

    return;
}

// ! User can modify this function in order to test your code before you begin to create the testcase.
// ! Otherwise please comment the main() function out! The function below may cause function "redefinition" error!

// int main(int agrc, char **agrv) {
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