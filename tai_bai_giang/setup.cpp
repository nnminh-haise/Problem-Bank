#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
    ClosedSet value_range(5, 100);

    if (testNumber > 32)
    {
        value_range = ClosedSet(10000, 100000);
    }

    int x = randInt(value_range);
    int y = randInt(ClosedSet(1, x - 1));
    int z = randInt(value_range);

    cout << x << " " << y << " " << z << endl;

    return;
}

int brute_force(int x, int y, int z) {
    int result = 0;

    while (result <= z) {
        bool flag = true;
        int base = result * y;
        for (int h = 1; h <= z; ++h) {
            if (base + h * y < h * x) {
                flag = false;
            }
        }
        if (flag) {
            break;
        }
        ++result;
    }
    return result;
}

void makeOutput(ifstream& cin, ofstream& cout) {
    int x, y, z;
    cin >> x >> y >> z;

    int result_1 = z * (x - y) / y  + ((z * (x - y) % y == 0) ? 0 : 1);
    int result_2 = brute_force(x, y, z);
    if (result_1 == result_2)
    {
        cout << result_1 << endl;
    }
    else
    {
        cout << result_2 << endl;
    }

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