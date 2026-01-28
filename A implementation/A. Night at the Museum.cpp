#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;

    char p = 'a';
    int m = 0;

    for (char c : s) {
        int d = abs(c - p);
        cout<< d;
        if (d > 13) {
            d = 26 - d;
        }
        m += d;
        p = c;
    }

    cout << m;
    return 0;
}
