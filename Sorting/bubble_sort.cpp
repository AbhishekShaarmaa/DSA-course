#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {1,4,3,5,6,2};
    for(int i = 0 ; i<6 ; i++)
    {
        for(int j = 0 ; j<6 ; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
     
     for(int i = 0  ; i<6 ; i++)
   {
    // cout<<"enter arr element "<<endl;
    cout<<a[i]<<endl;
   }

    return 0;
}