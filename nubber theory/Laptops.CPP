#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;


int main(){
    int t,a,b;
    cin >> t;
    bool alex = false;
    for (int i = 0; i < t; i++)
    {
    cin >> a >> b;
if(a<b){
    alex = true;
    break;
}
    }
    
if(alex){
    cout << "Happy Alex";
}else{
    cout << "Poor Alex";
}
    return 0;
}
