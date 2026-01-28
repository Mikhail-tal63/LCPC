#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
long long c=0,t,val1,val2;
cin >> t;
    vector<int> s1;
    vector<int> s2;
while (t--)
{
    cin >> val1 >> val2;
s1.push_back(val1);
s2.push_back(val2);

}


for (int i = 0; i < s1.size(); i++)
{
for (int j = 0; j < s2.size(); j++){
if(s1[i] == s2[j])
c++;
}
}
cout << c;
    return 0;
}
