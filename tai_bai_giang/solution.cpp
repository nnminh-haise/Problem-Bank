#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int brute_force(int x, int y, int z) {
    int result = 0;

    while (true) {
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

int main() {
    FASTIO;

    freopen("data.txt", "r", stdin);

    int x, y, z;
    cin >> x >> y >> z;

    cout << z * (x - y) / y  + ((z * (x - y) % y == 0) ? 0 : 1) << endl;
    cout << brute_force(x, y, z) << endl;

    return 0;
}