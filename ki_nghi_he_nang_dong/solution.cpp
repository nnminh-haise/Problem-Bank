#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main() {
    FASTIO

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

    return 0;
}