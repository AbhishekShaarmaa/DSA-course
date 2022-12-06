#include <iostream>
using namespace std;


int  sum(int *arr , int size) 
{
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    int remainigpart = sum(arr+1,size-1);
    int sum = arr[0] + remainigpart;
}
int main()

{
int size;
cout<<"size"<<endl;
cin >> size;

int arr[size];
for(int i=0 ; i<=size ; i++ )
{
    arr[i]=arr[size];
    cin >> arr[i];
   
}
int getsum = sum(arr,size);
cout<<getsum<<"  "<<sum(arr,size);
return 0;
}