#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{

string full,add,final;
int befor=0,after=0;
cin >> full;
cin >> add;

for (char c : full){
    if(c == '|'){
break;
}
befor++;
}
int size = full.size();

after = size - (befor +1);

for(char c:add){
    if (befor <= after){
        befor++;
        full = c + full;
    }else{
        after++;
        full += c;
    }
}

if (befor != after){
    cout<<"Impossible";
}else{
    cout <<full;
}





    return 0;
}
