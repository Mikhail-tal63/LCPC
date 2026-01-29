#include <iostream>
#include <String>
using namespace std;

main(){
long long t=10,k=0,r=0,f=0,j=0,nigga;

cin >> k >> r;
nigga = k + r;
if(k == r){
    cout << 1;
}else if (k % 5 == 0 || k % 10 == 0){
    for(int i = 1; i < k; i+=10){
        if(j % 10 == 5 || j % 10 == 0){
            f++;
        }
    
    }
    cout << f;
}else {
    
        
        if (k % 10 == r){
            cout << 1;
           
        }else 
    if(nigga % 10 == 0){
    cout << 9;}
    else{
    cout << 0;
    
}
        
    
    
    }






    return 0;
}