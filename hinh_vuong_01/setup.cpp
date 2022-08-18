#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
    ClosedSet length_range(5, 10);

    if (testNumber > 10) {
        length_range = ClosedSet(100, 1000);
    }

    int n = randInt(length_range);
    int m = randInt(length_range);

    cout << n << " " << m << endl;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << randInt(ClosedSet(0, 1));
            if (j < m)
                cout << " ";
        }
        cout << "\n";
    }

    return;
}

const int MAXN = 1e3 + 10;
const int MOD = 1e9 + 7;

int n, m, dp[MAXN][MAXN], res;
char a[MAXN][MAXN];

void makeOutput(ifstream& cin, ofstream& cout) {
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> a[i][j];
		
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++){
			if(a[i][j] == a[i - 1][j] && a[i][j] == a[i][j - 1] && a[i][j] == a[i - 1][j - 1])
				dp[i][j] = min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]}) + 1;
			else dp[i][j] = 1;
			res = max(res, dp[i][j]);
		}

	cout << res << endl;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cerr << dp[i][j] << " ";
        }
        cerr << endl;
    }

    return;
}

// ! User can modify this function in order to test your code before you begin to create the testcase.
// ! Otherwise please comment the main() function out! The function below may cause function "redefinition" error!

int main(int agrc, char **agrv) {
    srand(time(NULL));
    int test_number = 5;

    ofstream testcase_input_data_ostream("test.in");
    ofstream testcase_output_data_ostream("test.out");
    ifstream testcase_input_date_istream("test.in");

    makeInput(test_number, testcase_input_data_ostream);
    makeOutput(testcase_input_date_istream, testcase_output_data_ostream);

    testcase_input_data_ostream.close();
    testcase_output_data_ostream.close();
    testcase_input_date_istream.close();

    return 0;
}

#endif