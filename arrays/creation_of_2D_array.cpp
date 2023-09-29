
#include <iostream>
using namespace std;

//  function for searching in 2d array
int searchelement(int arr[][3] ,int target, int r , int c)

{
for(int i =  0 ; i<3 ; i++ )    
{
    for(int j = 0 ; j<3 ; j++)
    {
        if(arr[i][j] == target)
        {
            // cout<<"ti = "<<arr[<<endl;
            return arr[i][j];
        }
    }
}
}

// function for searching in matrix array 

int search(arr[][3] , int row , int col)
{
    
}

int main()
{

int arr[3][3];

// loop for input in array
for(int i = 0 ; i<3 ; i++)
{
    for(int j = 0 ; j<3 ; j++)
    {
        cout<< "enter array element"<<endl;
        cin>>arr[i][j];
    }
}

//  loop for printing array
for(int i = 0 ; i<3 ; i++)
{
    for(int j = 0 ; j<3 ; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

int ans = searchelement(arr , 6,3,3);
cout<<"target index = "<<ans<<endl;
	return 0;
}
