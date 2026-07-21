#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (n == 1) {
        cout << 0;
        return 0;
    }

    long long mx = 1 + k * (k - 1) / 2;

    if (n > mx) {
        cout << -1;
        return 0;
    }

    long long l = 1, r = k - 1, ans = k - 1;

    while (l <= r) {
        long long m = (l + r) / 2;

        long long pipes =
            1 + m * (2 * k - m - 1) / 2;

        if (pipes >= n) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    cout << ans;
    return 0;
}