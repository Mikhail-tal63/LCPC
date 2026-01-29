#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
int j = 0;
    for (int i = 0; i < t.size() ;  i++)
    {
    if(t[i] == s[j]){
    
    j++;
}
    }
    
    cout << j+1;
    return 0;
}
