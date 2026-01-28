#include <iostream>
#include <String>
using namespace std;

main(){
long long t,d=0,a=0,f=0;
string n;
cin >> t;
cin >> n;
while(t--){

if(n[f] == 'A'){
    a++;

}else if(n[f] == 'D'){
    d++;
    
}
f++;
}
if(a>d){
    cout<< "Anton";
}else if(d == a){
    cout<< "Friendship";
}else{
    cout<< "Danik";
}

    return 0;
}