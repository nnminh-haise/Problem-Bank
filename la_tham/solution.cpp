#include <bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin >> queries;
    while (queries--) {
        long long n, s;
        cin >> n >> s;
        cout << s / (n * n) << endl;
    }
    return 0;
}