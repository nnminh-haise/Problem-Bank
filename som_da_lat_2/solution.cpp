#include <bits/stdc++.h>

using namespace std;

int main() {
    const int inf = 1e9 + 7;
    int n, k;
    cin >> n >> k;
    vector < int > a(n), f(n);
    for (int &item: a)
        cin >> item;

    f[0] = 0;
    for (int i = 1; i < n; ++i) {
        int j = -1, ans = inf;
        for (int p = 1; p <= k; ++p) {
            int j = i - p;
            if (0 <= j and j < n) {
                ans = min(ans, f[j] + abs(a[i] - a[j]));
            }
        }
        f[i] = ans;
    }
    cout << f[n - 1] << "\n";
}