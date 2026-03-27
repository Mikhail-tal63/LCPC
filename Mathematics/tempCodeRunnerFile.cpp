#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
string s;

cin >> s;

s.erase(remove(s.begin(), s.end(), '+'), s.end());
 sort(s.begin(), s.end());
 for(int i = 0; i < s.size(); i++) {
        cout << s[i];
        if(i != s.size() - 1) {  
            cout << "+";
        }
    }
    return 0;
}