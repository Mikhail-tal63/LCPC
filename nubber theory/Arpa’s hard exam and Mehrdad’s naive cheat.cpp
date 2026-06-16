#include <iostream>
using namespace std;

int main(){

long long n,r=0;
cin >> n;
if(n==0){
    cout << 0;
    return 0;
}else if(n==1){
    cout << 8;
    return 0;
}
while (n--)
{
r=1378*1378;
}
n=r % 10;
cout << n;

    return 0;
}