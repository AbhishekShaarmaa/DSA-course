
// Sum of first N numbers


#include <iostream>
using namespace std;

void sum(int n , int i)
{
   while(i<=n)
   {
    n = i+n;
    
    sum(n , ++i)
    return n ;
   }
}
int main()
{
    cout<<"enter the value of n"<<endl;
    int n ;
    cin<<n;

  int ans = sum(n , 0);
  cout<<"ans is = "<<ans<<endl;
	return 0;
}
