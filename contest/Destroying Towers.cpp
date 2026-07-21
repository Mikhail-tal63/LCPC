#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
int t,val,oldval=0;
 cin >>t;
 while (t--)
 {
    oldval=0;
     int n;
    cin >>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        v.push_back(val);
    }
    val=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]<v[i+1]){
            oldval+=v[i];
            v[i+1]= v[i];
        }else{
            oldval+=v[i];
        }
        
    }
    cout <<oldval<<endl;
 }
 



return 0;
}
