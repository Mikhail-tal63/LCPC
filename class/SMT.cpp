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
       for (int j = 1; j < y+1; j++)
       {
           if( i%n==0 && i%y==0){
r=j;    
   }
       }
       

  
}


}
cout << r;
    return 0;
}