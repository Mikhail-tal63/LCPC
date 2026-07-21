#include <iostream>
#include <string>
#include <vector>
using namespace std;


long long BS(long long k,long long house){
    long long start=0,end=house;
    while (start<end)
    {
        long long mid = start + (end-start)/2;
        if((k-1)*mid==house){
            return mid;
        }
        else if ((k-1)*mid > house){
            end = mid-1;
        }else if((k-1)*mid < house){
            start = mid+1;
        }
    }
    return -1;
}

int main() {

    long long n,k,house;
    cin >> house>>k;
    if (k==house){
        cout <<1;
        return 0;
    }
    n = BS(k,house);
    cout << n;

    return 0;
}