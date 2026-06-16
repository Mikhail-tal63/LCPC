#include <iostream>
using namespace std;

int main(){

int n,m;
cin >> n>>m;
int f =n*m;
char c;
bool is_colored = false;


while(f--){
cin >>c;
if (c =='C'||c=='M'||c=='Y'){
  is_colored = true;
}
}
if (is_colored){
    cout << "#Color";

}else{
    cout << "#Black&White";
  
}
    return 0;
}