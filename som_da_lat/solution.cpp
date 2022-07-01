#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (int &item: a)
        cin >> item;

    vector < int > f(n);
    f[0] = 0;
    f[1] = abs(a[1] - a[0]);
    for (int i = 2; i < n; ++i) {
        f[i] = min(f[i - 1] + abs(a[i] - a[i - 1]), f[i - 2] + abs(a[i] - a[i - 2]));
    }
    cout << f[n - 1] << endl;
}