// C++ program to demonstrate the
// boilerplate code
#include <iostream>
using namespace std;

int pivotIndex (int arr[] , int low , int high)
{
    int pivot = arr[low];
    int i  = low;
    int j = high;

    while (i <= j)
    {
        cout<<arr[i]<<endl;
        while(arr[i] <= pivot && i<high) 
        
        {return i++;
        }
        while(arr[j] > pivot && j>low) 
        {
        return j--;
        }
        if(i<j)swap(arr[i], arr[j]);
       
    }
    swap(arr[low] , arr[j]);
    cout<<"value of j =  "<<j<<endl;
     return j;  
}

void quickSort(int arr[], int low, int high)
{
  

    if (low < high)
    {
        int pivot = pivotIndex(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
// Driver Code
int main()
{
    int n = 7;
    int arr[n] = {9, 7, 3, 6, 4, 5, 2} ;

    cout << "array before sortimg  = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "array after sortimg  = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}






