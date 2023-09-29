#include<iostream>
using namespace std;

int main()
{
    // cout<<"enter size of arry "<< endl;
   int n;  
   
   int arr[6] = {2,3,4,5,6,7};
//   cout<<"enter key"<<endl;
   int key = 4  ;
    
  

   int s = 0 ,e = 5 ,m ;
   while(s<e)
   {
     m = (s+e)/2;

     if(arr[m] == key)
     {
        cout<<"answer is  "<<m<<endl;
     }

     if(arr[m] < key)
     {
        s = m + 1;
     }
     else
     {
        e = m-1;
     }
   }
    return 0;
}