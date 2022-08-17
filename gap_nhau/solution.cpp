#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int s1, v1, s2, v2;

    cin >> s1 >> v1 >> s2 >> v2;

    int res = (s1 - s2) / (v2 - v1);
    if (res >= 0)
        cout << res << endl;
    else
        cout << -1 << endl;

    return 0;
}