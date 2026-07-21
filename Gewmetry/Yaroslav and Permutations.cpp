#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
bool yes = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   for (int k = 0; k < 3; k++)
   {
     for (int i = 1; i < n; i++)
    {
       
         if (arr[i]==arr[i+1])
        {
        if (arr[i] != arr[i - 1] && arr[i] != arr[i - 2])
        {
            swap(arr[i], arr[i - 1]);
            yes = true;
        }else {
          yes = false;
        }
        }else if (arr[i]==arr[i-1]){
             if (arr[i] != arr[i + 1] && arr[i] != arr[i + 2] )
        {
            swap(arr[i], arr[i + 1]);
            yes = true;
        }else{
     yes = false;
        }
        }

    }
   }
   



    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
   if(yes){
    cout << "YES";}else{
        cout << "NO";
    }

    return 0;
}
