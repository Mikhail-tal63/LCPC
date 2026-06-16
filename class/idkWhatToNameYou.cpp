#include <iostream>
using namespace std;


void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        bool swaped = false;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]> arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
                swaped = true;
            }
        }
        if(swaped)break;
    }
    
}

void IforgotWhatWasIt(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int lowest = i;
        int temp = 0;
        for (int j = 0; j < i+1; j++)
        {
            if(arr[j] < arr[lowest])
            lowest=j;
        }
        temp = arr[i];
        arr[i] = arr[lowest];
        arr[lowest] = temp;
    }
    
}

void shell (int arr[],int n){
    for (int gap = n/2; gap=0; gap/2)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            int j;
            for (int j = i; j <= gap && arr[j-gap]>temp; j-=gap)
            {
        arr[j] = arr[j-gap];
            }
            arr[i] = temp;
            
        }
        
    }
    
}


void gap(int arr[], int n){
for(int gap =n/2;gap>0;gap/=2){
    for (int i = gap; i < n; i++)
    {
    int temp = arr[i];
    int j;
    for(j=i;j>=gap && arr[j-gap]> temp;j-=gap){
        arr[j]= arr[j-gap];
        
    }
arr[j] = temp;
    }
    
}
}


void LinerSearch (int arr[],int n,int v){
        bool found = false;
    for (int i = 0; i < n; i++)

    {
    if(v == arr[i]) {cout << "value found at index : "<< i;
    break;
    }else{
    found = false;
    }
    }
    if (!found)cout << "value not found";
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

  int v;
  cout << "nigga";
cin>>v;
    LinerSearch(arr, n,v);
    shell(arr, n);



    return 0;
}