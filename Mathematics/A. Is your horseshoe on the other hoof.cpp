#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {

long long val,n=0;



    set<int> s;
for (int i = 0; i < 4 ; i++)
{
cin >> val;
s.insert(val);
}
n = 4 - s.size();
cout << n;



    return 0;
}
