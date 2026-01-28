#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
long long t,val;
cin >> t;
    vector<int> s;
while (t--)
{
    cin >> val;
s.push_back(val);

}
sort(s.begin(),s.end());

for (int i = 0; i < s.size(); i++)
{
    cout << s[i] << " ";
}
    return 0;
}
