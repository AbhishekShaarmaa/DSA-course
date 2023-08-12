#include<iostream>
using namespace std;

int bsearch(int arr[] , int key , int size )
{
    int start = 0 ;
    int end  = size - 1 ;
    int mid = (start + end) / 2 ;
    cout << "mid value" << mid <<endl;
    
    while(start <= end)
    {  
        cout<< "arr[mid]"<< arr[mid] << endl;
        if(key == arr[mid] )
        {
            return mid ;  
        }

        // agr mid ke equal nii hai to
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else 
        {
            end = mid-1;
        }
       
       mid = (start + end) / 2;
    };

   return -1;
};

int main()
{
  
  int arr1[5] = {1,2,3,4,5};
  int arr2[4] = {1,2,3,4};

  int key ;
   
   int odd = bsearch(arr1 , 3 , 5) ;
   cout << "odd binary serch " << odd << endl; 
 


    return 0;
}