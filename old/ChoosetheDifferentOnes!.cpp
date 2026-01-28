#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
int t;

stack<int> s;
stack<int> s2;
cin >> t;

while (t--)
{
int a, b , k,ac=0,bc=0;
cin >> a >> b >> k;
vector<int> v;
for (size_t i = 0; i < a; i++)
{
    int av;
    if (k % av == 0)
    {
        ac++;
v.push_back(av);
    }
    v.erase()(unique(v.begin(),v.end()));
}
for (size_t j = 0; j < b; j++)
{
    int bv;
    if (bv < k);
    {
    
        bc++;
    }
}

}
return 0 ;
}