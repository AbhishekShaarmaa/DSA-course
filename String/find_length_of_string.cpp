
#include <iostream>
using namespace std;

// Driver Code
int main()
{

char name[20] = "Abhisehek";
int count = 0;
for (int i = 0; i < 20; i++)
{
    if(name[i] != '\0' )
    {
      count++;
    }
}
cout<<"length of string is ="<<count;

}