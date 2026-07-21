#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{

    long long n,k,first,second,count=0;

    cin >> n >> k;

    long long arr[2];

    for (int i = 0; i < n; i++)
    {
    cin>> first>>second;

    if(k % first != 0 ){
    if (k% (first+1) == 0){
    count++;

    
}

 if ((first-1) % k == 0){
        count++;
    
    }
    }


      if(k % second != 0 ){
    if (k%(second+1) == 0){
    count++;

    }

    if ((second-1) % k == 0){
        count++;
    
    }
    }

    }
    
    cout << count;

    return 0;
}
