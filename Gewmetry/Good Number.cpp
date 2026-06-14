#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
int n,k,c=0;
cin >> n >> k;

while(n--){
    string s;
    cin >> s;
    vector<bool> found(10,false);

    for(char c:s){
        found[c-'0']= true;
    }

    bool cool = true;


    
}

    return 0;
}