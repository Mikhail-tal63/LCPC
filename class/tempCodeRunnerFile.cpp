#include <iostream>
using namespace std;




int compare(int s, int n){
 
if(s<=n){
cout << n;

return compare(s,n-1); 
}
return 0;

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
cin >> s >> n;

compare(s, n);

    return 0;
}