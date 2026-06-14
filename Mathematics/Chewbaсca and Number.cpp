#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long long n;
    cin >> n;

    string v,s = to_string(n);

    int size = s.size();
    

    int val = 0;
    
    for (int i = 0; i < size; i++)
    {
    v=s[i];
    int val = stoi(v);
    if (s[0] == '9'&& i<1)
    {
        cout << 9;
    }
    else if(val == 9){
        cout << 0;
    }
    else if (val == 0){
        cout << 0;
    }
    else if (val <5){
        cout << val;
    }else
    {
        cout <<abs(9-val);
    }
    }

    return 0;
}