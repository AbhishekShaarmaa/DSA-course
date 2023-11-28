
// C++ program to demonstrate the
// boilerplate code
#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

// better approach
void subarr(int arr[] , int n)
{
    
}

//brute force approach
// void subarr(int arr[], int n)
// {    
//     int count  = 0;
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//           for (int j = i; j < n; j++)
//         {
//             maxi = max(maxi , count);
//             count = 0;
//             for (int k = i; k <= j; k++)
//             {
//                count  += arr[k]; 
//             //    cout<<arr[k]<<" ";
//             }
            
//             cout<<endl;
//             // cout<<count;
            
//         }
        
//         cout << endl;
//     }
//     cout<<maxi<<endl;
// }

// Driver Code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    subarr(arr, n);
    return 0;
}

