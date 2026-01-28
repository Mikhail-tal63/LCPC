#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()

{

long long n,h;
cin >> n >> h;
int b,s=0;

while(n--){

    cin >> b;

if(b > h){
    s=s+2;
  
}else{
    s++;
}
}
cout<<s;


return 0;

}
