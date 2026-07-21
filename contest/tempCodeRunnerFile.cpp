#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{

long long t;

cin >>t;
while (t--)
{
        long long n,big;
vector<long long> v;
cin >>n;
for (long long i = 0; i < n; i++)
{
    long long val;
    cin>>val;
    v.push_back(val);
}
if(v.size()==1){
    cout<<v[0];
    return 0;
}
 big=v[2];
for (long long i = 0; i < n-1; i++)
{
     
    if(v[i]>v[i+1]){
        swap(v[i],v[i+1]);
        v[i+1]+=v[i];
        big=v[i+1];
       
    }else if(v[i]<v[i+1]){
        big=v[i+1];
    }else{
        continue;
    }
}

cout<<big<<'\n';
}


    


return 0;
}
