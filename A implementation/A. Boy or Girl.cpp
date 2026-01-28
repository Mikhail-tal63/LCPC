#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
long long t;
string val,val2;
cin >> val;
int n;
 n = val.size();
    set<int> s;
for (int i = 0; i < val.size() ; i++)
{
val2 = val[i];
s.insert(val[i+1]);
}
if (n >= s.size()){
    cout << "CHAT WITH HER!";
}else{
    cout << "IGNORE HIM!";
}
cout << n<<val;
for(c: val){
    cout << s;
}

    return 0;
}
