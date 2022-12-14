#include<iostream>
using namespace std;
merge(int arr1[],int m, int arr2[] , int n,int arr3[])
{
    int i=0; 
    int j=0;
    int k=0;
    while (i<n && j<m)
    {
        if (arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else
        {
            arr3[k++]=arr2[j++];
        }

    }
  
}
print( int arr3[] , int  o  )
{
    
    for(int k=0;k<o;k++)
    
}

int main()
{
 int arr1[5] = {1,3,5,7,9};
 int arr2[3] = {2,4,6};

 int arr3[8]={0};

 merge(arr1, 5, arr2 , 3 , arr3)

print(arr3 , 8)

    return 0;
}