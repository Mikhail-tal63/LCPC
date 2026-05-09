#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;


int main(){
int length,pls=0,min=0,j=1;
string s,t;
cin >> s>>t;

if (s >= t){
    length = s.size();
      length = t.size();
    for (int i = 0; i < length-1;i++){

    if(s[j] - s[i] == 1){pls++;}else{min=min-1;}
    j++;
    if(j == length){
        pls++;
    }
    }


}else{
     length = t.size();
    for (int i = 0; i < length-1;i++){

    if(t[j] - t[i] == 1){pls++;}else{min=min-1;}
    j++;
    if(j == length){
        pls++;
    }


}    
}
cout << pls<<" "<<min;

    return 0;
}
