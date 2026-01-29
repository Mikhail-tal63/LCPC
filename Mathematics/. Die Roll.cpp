#include <iostream>

#include <algorithm>
using namespace std;

int main() {

long long d,w,y=0,dice = 6;

cin >> w >> y;

if(w > y){
d = 7 - w;
}else{
    d = 7 - y;
}
if(dice % d == 0){
    
cout << d/d <<"/"<<dice/d;
}else if(d % 2 == 0){
    cout << d/2 <<"/"<<dice/2;
}else{
cout << d <<"/"<<dice;
}

    return 0;
}