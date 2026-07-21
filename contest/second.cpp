#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{


    int n;
    cin >>n;
    int arr[n],arr2[n];
    int temp,changes=0;
    bool swapped;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    



    for(int i = 0; i < n-1; i++){
        swapped = false;

        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                changes++;
                swapped = true;
            }
        }

        if(!swapped) break;
    }
    
    
    bool firstchange = false;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<arr2[i]){
            arr[i]=arr2[i];
        }else if(arr[i]>arr2[i]){
            cout <<-1;
            return 0;
        }
    }
    

        for(int i = 0; i < n-1; i++){
        swapped = false;

        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                changes++;
                swapped = true;
            }
        }

        if(!swapped) break;
    }

cout<<changes;


return 0;
}
