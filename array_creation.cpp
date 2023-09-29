#include<iostream>
using namespace std;

int main()
{
   cout<<"enter size of arry "<< endl;
   int n;  
   cin>>n;
   int arr[n];
   
   for(int i = 0  ; i<n ; i++)
   {
    cout<<"enter arr element "<<endl;
     cin>>arr[i];
   }
  cout<<endl;
    for(int i = 0  ; i<n ; i++)
   {
    // cout<<"enter arr element "<<endl;
    cout<<arr[i]<<endl;
   }
    return 0;
}