#include <iostream>
using namespace std;

int binarysearch(int arr[], int s, int k , int e)
{
    if (s>e)
    {
       return false;
    }
    int mid = s - (e-s)/2;
    if(k==mid)
    {
        return true;
    }
    if 
 }


int main()
{
    int n = 5;
    
    int arr[5] = {1, 2, 4,5,6};
    int key = 4;

    cout<<" "<< binarysearch(arr, n, key);
    return 0;
}