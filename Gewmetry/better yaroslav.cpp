#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> freq;
    int mx = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mx = max(mx, ++freq[x]);
    }

    if (mx <= (n + 1) / 2)
        cout << "YES";
    else
        cout << "NO";
}