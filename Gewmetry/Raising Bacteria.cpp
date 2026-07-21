#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    long long n, k = 1, count;
    cin >> n;
k=n;
    for (long long i = 2; i < n; i++)
    {
        k=n;
        if(k/i>k/(i+1)){
        continue;

        }else{
            cout <<i;
            break;
        }
    }

    return 0;
}
