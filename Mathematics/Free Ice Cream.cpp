#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
string s ;
int t,stored,count=0,x=0,d=0;

cin >> t , stored;

while (t--)
{
cin >> s >> x;
if(s == "+"){
    cout << "here";
    stored+=x;
}else{
    if (stored > x){
stored-=x;
    }else{
        count++;
        continue;
    }
}
}
cout <<d<<" "<< count;




    return 0;
}