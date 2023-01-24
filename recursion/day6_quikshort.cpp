#include<iostream>
using namespace std;
partition(int a[],int s,int e)
{
    int pivot = a[s];

    int cnt = 0 ;
    for (int  i = 0; i < e; i++)
    {
        cnt++;
    }
    
    int pivotIndex = s + 2
    

}
quiksort(int a[],int s,int e)
{
    // base case
    if (e<=s)
    {
        return 0;
    }

    int p = partition(a[],s,e);

    // solving left side 
    quiksort(a[],s,p-1);

    // solving right side
    quikdort(a[],p+1,e);


}



int main(){

int a[5]={3,3,7,9,5};

quiksort(arr[],0,n-1);
}