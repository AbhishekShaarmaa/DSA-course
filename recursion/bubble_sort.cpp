#include<iostream>
using namespace std;
int bubble (int *arr,int n){
    int max = arr[0];
    int  i = 0;
    for ( i=0 ; i<n ; i++)
       if(arr[i]>max)
        max = arr[i];
        cout<<"maximum value "<<max <<endl;
        return arr[i];

     swap (arr[n-1] , arr[i] );
     cout<<swap<<endl;
    bubble (n--) ;
    cout << "sorted array"<<arr[i];

    
    return 0;
}

int main()
{
    int a[5] = {10,2,5,6,4};
    bubble(a , 5);
   
    cout << bubble;
    return 0;
}