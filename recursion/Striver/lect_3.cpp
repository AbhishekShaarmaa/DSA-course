// C++ program to demonstrate the 
// boilerplate code 
#include <iostream> 
using namespace std; 
// paramaterised method
// int paramaterised( int n , int sum)
// {
  
    
//     if(n<1)
//     {
//         cout<<sum<<endl;
//         return 0;
//     }
    
//     paramaterised(n-1 , sum+n);
// }


// Functional Relation Method

int funrel (int n)
{
    if(n == 0)
    {
        return 0;
    }
    
     return n + funrel(n-1);

}

// Driver Code 
int main() 
{ 
    
int n ;
//int sum = 0;
cout<<"enter n value"<<endl;
cin>>n;
// paramaterised(n , sum );
int ans = funrel(n);
cout<<ans<<endl;
    
    
    
	return 0; 
} 
