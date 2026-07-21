#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];

    int i = low - 1;
    int j = high + 1;

    while(true){

        do{
            i++;
        } while(arr[i] < pivot);

        do{
            j--;
        } while(arr[j] > pivot);

        if(i >= j)
            return j;

        swap(arr[i], arr[j]);
        
    }

}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }
}

int main(){

    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];


    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);
    print(arr, n);

    return 0;
}