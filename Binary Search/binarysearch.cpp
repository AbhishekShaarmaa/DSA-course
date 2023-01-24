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
    int n=60;
    int arr[8]={2 4 5 7 9 11 14 15 20 22 23 24 25 26 27 28 32 33 36 37 39 41 42 43 44 45 47 48 49 50 51 53 54 55 57 59 60 61 62 63 66 67 68 69 70 71 72 73 74 76 78 86 87 89 91 93 94 95 97 100};
    int keyelement  = 5;
   bool ans = binarysearch(arr , 60 , 5);
    cout<< ans  << endl;
    return 0;
}
