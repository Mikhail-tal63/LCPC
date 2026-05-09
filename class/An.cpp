#include <iostream>
using namespace std;

int main()
{

    int n;
    int arr[];
    int temp, min;

    for (int i = 0; i < n; i++)
    {
        min = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = arr[j];
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    return 0;
}