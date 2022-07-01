#include <bits/stdc++.h>

using namespace std;

long long binary_search(long long a, long long b) {
    for (long long k = 40; k >= 1; k--) {
        long long left = ceil(pow(a, 1.0 / k)) - 1, right = ceil(pow(b, 1.0 / k)) + 1;
        while (left <= right) {
            long long mid = (right + left) / 2;
            long long res = pow(mid, k);
            if (a <= res and res <= b)
                return k;
            else if (res < a)
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int queries;
    cin >> queries;
    for (int qq = 1; qq <= queries; ++qq) {
        long long l, r;
        cin >> l >> r;
        long long ans = binary_search(l, r);
        cout << "Case #" << qq << ": ";
        cout << ans << "\n";
    }
}