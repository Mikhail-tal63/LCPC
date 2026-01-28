#include <iostream>
using namespace std;

int main(){
    long long prev,j=0,t=0,b=1;
cin >> t;

    for (int i = 0; i < t; i++)
{
cin >> j;
if(i > 0){
if(j != prev ){
    b++;
}}
prev = j;
    }
    cout << b;




    return 0;
}