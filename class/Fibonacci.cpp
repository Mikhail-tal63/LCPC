#include <iostream>
using namespace std;

int main(){

    int first=0, second=1,l;
cin >> l;
    while(l--){
        second = first + second;
        first = second - first;
       
    }
    

 cout << first << endl;

    return 0;

}