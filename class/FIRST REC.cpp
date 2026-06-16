#include <iostream>
using namespace std;



int compare(int s, int n){
 
if(s<=n){
cout << n;

return compare(s,n-1); 
}
return 0;

}
int fap(int l){

if(l==0){
    return 0;
}
if(l==1){
    return 1;
}

return fap(l-1) + fap(l-2);
}
int factorize( int n){
 
if(n==2){
return 1;
}
return n * factorize(n-1);

}
int sum( int n){
 
if(n==0){
return 1;
}
return n + sum(n-1);

}

int main(){
 int n,s;
cin >> s;

cout << fap(s);

    return 0;
}