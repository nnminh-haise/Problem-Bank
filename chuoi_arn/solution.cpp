#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

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

    return 0;
}