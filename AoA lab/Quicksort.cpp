// C++ program to demonstrate the
// boilerplate code
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    int n;
    cout<<"enter no. of array elements"<<endl;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter array element"<<endl;
        cin>>arr[i];
    }
     cout<<" array element are"<<endl;
     for(int i=0;i<n;i++)
    {
        
        cout<<arr<<" ";
    }
	return 0;
}
