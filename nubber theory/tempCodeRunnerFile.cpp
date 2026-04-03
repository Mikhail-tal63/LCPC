#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    for (int i = 0; i < n; i++) {
        int mini, maxi;

        // أقل مسافة (أقرب جار)
        if (i == 0)
            mini = x[1] - x[0];
        else if (i == n - 1)
            mini = x[n - 1] - x[n - 2];
        else
            mini = min(x[i] - x[i - 1], x[i + 1] - x[i]);

        // أكبر مسافة (أبعد طرف)
        maxi = max(x[i] - x[0], x[n - 1] - x[i]);

        cout << mini << " " << maxi << "\n";
    }

    return 0;
}