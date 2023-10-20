
#include <iostream>
using namespace std;

//  function for searching in 2d array
// int searchelement(int arr[][4] ,int target, int r , int c)

// {
// for(int i =  0 ; i<4 ; i++ )    
// {
//     for(int j = 0 ; j<4 ; j++)
//     {
//         if(arr[i][j] == target)
//         {
//             // cout<<"ti = "<<arr[<<endl;
//             return arr[i][j];
//         }
//     }
// }
// }

// function for searching in matrix array 

int search(int arr[][4], int row, int col, int target) {
    int k = 0; // This will always search in the first column
    int s = 0, e = row - 1;

    while (s <= e) {
        int m = s + (e - s) / 2;

        if (arr[m][k] == target) {
            return m;
        }

        if (m > 0 && arr[m - 1][k] < target && target < arr[m][k]) {
            return m - 1;
        }

        if (m < row - 1 && arr[m][k] < target && target < arr[m + 1][k]) {
            return m;
        }

        if (arr[m][k] > target) {
            e = m - 1;
        } else {
            s = m + 1;
        }
    }

    return -1; // Return -1 if not found
}


int main()
{

int arr[4][4];

// loop for input in array
cout<<"enter array elements"<<endl;
for(int i = 0 ; i<4 ; i++)
{
    for(int j = 0 ; j<4 ; j++)
    {
        // cout<< "enter array element"<<endl;
        cin>>arr[i][j];
    }
}

//  loop for printing array
for(int i = 0 ; i<4 ; i++)
{
    for(int j = 0 ; j<4 ; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

// int ans = searchelement(arr , 11,4,4);
// cout<<"target index = "<<ans<<endl;

int ans2 = search(arr , 4,4,9);
cout <<"col wise index is =  "<< ans2 << endl;
	return 0;
}
