#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    string s1,s2,s3;
    int t;
    cin >> t;
    cin >> s1;
int j = 1;
int c = 0;



    for (int i = 0; i < t; i++)
    {
    if(s1[i] == s1[j]){
c++;

    }

j++;
if(j>t){
    break;
}
}
cout << c;
    return 0;
}
