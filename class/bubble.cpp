#include <iostream>
using namespace std;


void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void bubbleShi(int arr[], int n){
    int temp;
    bool swapped;

    for(int i = 0; i < n-1; i++){
        swapped = false;

        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }

        if(!swapped) break;
    }
}

int main(){
 int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

      cout << "Enter elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

  

    bubbleShi(arr, n);

    print(arr, n);

    return 0;
}