#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<int> s(n);
    int oddc = 0, evenc = 0, isodd = -1, iseven = -1;

    for (int i = 0; i < n; i++) {
        cin >> s[i];
        if (s[i] % 2 == 0) {
            evenc++;
            iseven = i + 1; 
        } else {
            oddc++;
            isodd = i + 1;
        }
    }

    if (oddc > evenc) {
        cout << iseven << endl; 
    } else {
        cout << isodd << endl; 
    }

    return 0;
}
