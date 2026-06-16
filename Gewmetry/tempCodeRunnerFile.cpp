#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
char ch;
long long n,val,first=0,second=0;
bool noResult = true;
cin >>n;
vector<int> v;
vector<char> c;

for (int i = 0; i < n; i++)
{
    cin>>ch;
    c.push_back(ch);
}

for (int i = 0; i < n; i++)
{
    cin>>val;
    v.push_back(val);
}

for (int i = 0; i < n; i++)
{
if(c[i] == 'R'&&c[i+1] == 'L'){
first = v[i+1] - v[i];

first /= 2;

if (second == 0)
{
    second = first;
}
if (first <= second){
    second = first;
}
noResult = false;
}
}

if(noResult){
    cout << -1;
}else{
    cout << second;
}

    return 0;
}
