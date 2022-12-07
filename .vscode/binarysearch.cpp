#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key )
{
   int start = 0 ;
   int end = size;
   int mid  = (start+end)/2;
   cout<<"mid element "<<mid<<endl;
//    while loop
while (start <= end )
{
    if (mid==key)
    {
        return key;
        cout<<"location of key"<<key<<endl;
    }    
    
    if (mid<key)
    {
        start = mid +1;
    }
    else
    {
      end = mid-1;
    }
   
    mid  = (start+end)/2;
    return -1;

}

  
}

int main()
{
    int n=8;
    int arr[8]={1,2,5,6,6,6,8,9};
    int key = 5;
    binarysearch(arr , n , key );
    cout<<binarysearch<<endl;
    return 0;
}
