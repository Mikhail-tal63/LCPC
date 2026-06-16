#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;


int main(){

    long long t,x=0,y=0;
    cin >> t;
    string first,second,z;
    if(t == 1){
        cin >> z;
        cout << z;
   return 0;
    }
while (t--)
{
cin >> z;
if(x == 0){
    first=z;
    x++;
}else if(first == z){
x++;
}else{
 second=z;
    y++;
}
}
if(x > y){
    cout << first;
}else{
    cout << second;
}

    return 0;

}