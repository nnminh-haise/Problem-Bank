#include <bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin >> queries;
    while (queries--) {
        int n;
        cin >> n;
        int a, b, c, e;
        a = (n + 3) / 3;
        e = (n + 3) % 3;
        b = a - 1;
        c = a - 2;
        if (e == 2) {
            a += 1;
            b += 1;
        }
        else if (e == 1) {
            a += 1;
        }
        cout << b << " " << a << " " << c << "\n";
    }
    return 0;
}