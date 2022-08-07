#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO

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

    //cout << dp[n][m] << endl;

    int i = n, j = m;
    string longest_common_substring = "";
    while (i >= 1 and j >= 1) {
        if (s1[i - 1] == s2[j - 1]) {
            longest_common_substring = s1[i - 1] + longest_common_substring;
            --i;
            --j;
        }
        else {
            while (i - 1 >= 0 and dp[i - 1][j] == dp[i][j])
                --i;
            while (j - 1 >= 0 and dp[i][j - 1] == dp[i][j])
                --j;
        }
    }

    cout << longest_common_substring << endl;

    return 0;
}