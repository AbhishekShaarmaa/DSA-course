#include<iostream>
using namespace std;
bool linearsearch(int *arr,int size, int key)
{
    // base case
    if(size==arr[0])
    {
        return true ;
    }
    // cheking for key
     if (key == arr[size])
       {
        return true ;
       }
       else 
       {
         linearsearch(arr+1,--size,key);
         return 0;
         
       }
    return 0;
}

int main()
{
    int n=5;
    int arr[5]= { 1,4,5,2,6 };
    int key = 9;

    cout<<" "<<linearsearch(arr,n,key);


    return 0;
}