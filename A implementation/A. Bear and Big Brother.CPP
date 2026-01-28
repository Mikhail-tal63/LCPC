#include <iostream>
using namespace std;

int main(){
    long long j=0,t=0,b=0;
    cin >> t >> b;

    while (b >= t)
    {
        j++;
        t = t *3;
        b = b *2;
    }
    cout << j;




    return 0;
}