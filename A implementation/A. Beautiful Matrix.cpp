#include <iostream>
#include <String>
using namespace std;

main(){
long long t=25,d=0,a=0,f=0,j=0;
while (t--){
cin >> d;
    j++;
  
    if(d == 1){
        for(int n = 1; n < 3; n++){
if(j == 15){
    cout << 0;
    break;
}
else if(j > 11 || j < 18){
    if(j > 11){
        
for(int i = j; i < 13; i++){
    f++;
    if(i == 13){
        j=13;
    }
    f--;
   cout << "f="<<f;
}



}
if(j > 15){
    f = f + j - 15;
    
}
else if(j > 17){
    f++;
    j = j - 5;
}
}
else if(j < 17){
    f++;
    j = j + 5;
}
}
    }}

cout << f;



    return 0;
}