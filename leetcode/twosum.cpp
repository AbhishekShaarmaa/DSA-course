#include<iostream>
using namespace std;
// sum function
int sum(int a[],int n,int t)
{
    int i = 0;
// base case
if (a[i]>t)
{
    return 0 ;
}

for (i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        for (a[i] + a[j] == t)
        {
            cout << "index"<<i<<j<<endl;
            return ;
        }
    }
}


}

int main()
{

int a[5] = {1,5,6,3,4} ;
int target = 10;
sum(a,5,10) 
    return 0;
}