#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    string s1,s2,s3;
    
    cin >> s1;
s2 = s1;
s3 = s1;

int j = 0;
int c = 0;

transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for (int i = 0; i < s1.size(); i++)
    {
    if(s1[i] < s2[i]){
      
c++;
    }else{
        j++;
    }
    
    }
if (c > j){
        transform(s3.begin(), s3.end(), s3.begin(), ::toupper);

    cout << s3;
}else{
   

    cout << s2;
}
    
    return 0;
}
