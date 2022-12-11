#include<iostream>
using namespace std;

int power(int a,int b)
{
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }

    int ans = power(a , b/2) ;

    if(a%2==0)
    {
        int  ans = ans * ans;
        cout<<ans<<endl;
        return ans;
    }    
    return 0;
    

      
}

int main()
{

int a =2;
int b=2;

cout<< ""<<power(2,2);





    return 0;
}