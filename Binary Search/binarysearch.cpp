#include<iostream>
using namespace std;
bool binarysearch(int arr[],int size,int key )
{
   int start = 0 ;
   int end = size-1;
   int mid  = (start+end)/2;
   
   
//    while loop
while (start <= end )
{
    if (arr[mid]==key)
    {
      
       cout<< mid << endl;
         return mid ;
    }    
    
    if (arr[mid]<key) 
    {
        start = mid +1;
        
    }
    else
    {
         
      end = mid-1;
     
    }
   
    mid  = (start+end)/2;

}

  return -1;
}

int main()
{
    int n=8;
    int arr[8]={1,2,5,6,6,6,8,9};
    int keyelement  = 5;
   bool ans = binarysearch(arr , 8 , 5 );
    cout<< ans  << endl;
    return 0;
}
