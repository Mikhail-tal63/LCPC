#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
long long a;
string s;
cin >> a;


while (a--){
cin >> s;
if(s.length() > 10){
    char last = s[s.length() -1];
    char first = s[0];
    int size = s.length();
    size-=2;

    string f;
    f+= s[0];
    f+= to_string(size);
    f+= s.back();
    cout <<f ;
}
else{
    cout << s;
}



}
    return 0;
}