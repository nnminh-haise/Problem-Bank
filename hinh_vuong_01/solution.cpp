#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n, m, ans = 1;
    cin >> n >> m;
    vector < vector <int> > a(n), f(n);
    for (vector <int> &line: a) {
        line.resize(m);
        for (int &item: line)
            cin >> item;
    }

    for (vector <int> &line: f)
        line.resize(m, 1);


    for (int i = 1; i < n; ++i)
        for (int j = 1; j < m; ++j) {
            if (a[i][j] == a[i - 1][j - 1] and a[i][j] == a[i - 1][j] and a[i][j] == a[i][j - 1])
                f[i][j] = min(f[i - 1][j - 1], min(f[i - 1][j], f[i][j - 1])) + 1;
            ans = max(ans, f[i][j]);
        }

    cout << ans << "\n";

    return 0;
}