#include <iostream>
using namespace std;
 
int main(){
 
    int m,n,count=0;
    cin >>n >> m;
bool yes= false;
    if(m%2==0){
        cout << "NO";
        return 0;
    }
    if(n==2&&m==3){
        cout << "YES";
        return 0;
    }
    for (int i = n; i <= m; i+=2)
    {
        
        for (int j = 3; j <= m; j++)
        {
            if(n==j)continue;;
            if(i%j==0){
        count++;
 
            }
            if(count >1) break;
            
        }
        if(count ==1&&i!=m){
        cout << "NO";
        return 0;
            }
        if(count ==1&&i==m){
        cout << "YES";
        return 0;
            }
        count =0;
    }
    if(!yes){
        cout << "NO";
    }
    return 0;
}
