#include <iostream>
using namespace std;

int main() {
int n,y,r;
cin >> n >> y; 
if(n !=0 && y !=0){

if(n < y){
    swap(n,y);
}

    for (int i = 1; i < n+1; i++) {
       
   if(n%i==0  && y%i==0){
r=i;    
   }
  
}


}
cout << r;
    return 0;
}