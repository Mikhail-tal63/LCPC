#include <iostream>
using namespace std;

int main(){
 long long l=0,r=0,b=0,team=0;
 cin >> l >> r >> b;
 if(l==0||r==0){
    cout << 0;
    return 0;
 }
bool l_isbigger;
 if(l>r){
    l_isbigger=true;
 }
if(l_isbigger){
    for (int i = 0; r < l; i++)
    {
        r++;
        b--;
        if(b<1){
            break;
        }
    }
    
}else{
    for (int i = 0; l < r; i++)
    {
        l++;
        b--;
        if(b<1){
            break;
        }
    }
}
if(b>=1){
    if(b%2==0){
        team=l+r+b;
    }else{
        b--;
        team=l+r+b;
    }
}else{
    if(l>r){
        team=r+r;
    }else{
        team=l+l;
    }
}
cout << team;
    return 0;
}