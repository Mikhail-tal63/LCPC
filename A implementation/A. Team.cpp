#include <iostream>
#include <String>
using namespace std;

main(){
long long t,d=0,a=0,f=0,j=0;

cin >> t;

while(t--){
cin >> a >> d >> f;
if(a + d + f >= 2){
    j++;
}

}
cout << j;

    return 0;
}