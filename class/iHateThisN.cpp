#include <iostream>
using namespace std;

void bubbleShi(int arr[],int n){
    int temp;
    bool swapped;

    for(int i = 0; i < n-1; i++){
swapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
                swapped = true;
            }
        }
    }
    if (!swapped) break;
}


int main() 
{


return 0;
}