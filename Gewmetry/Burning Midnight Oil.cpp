#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long high=n,low=0,min=n,result;
    while(high>low){
        long long mid = (high-low)/2;

        long long check ;
        for (int i = mid; i > 0; i/=2)
        {
            check +=i;
            if(check >= n)
            break;
        }
        if (abs(n-check) < min&&check >= n)
        {
        min=abs(n-check);
        result=mid;
        high = mid-1;
        }
        if (check < n){
        low = mid+1;
        }else if(check == n){
        cout << mid;
        return 0;
        }else{
            cout <<result;
            return 0;
        }
        
        
    }

    return 0;
}