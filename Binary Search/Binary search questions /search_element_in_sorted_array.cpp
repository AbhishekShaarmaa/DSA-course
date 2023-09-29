// C++ program to demonstrate the
// boilerplate code
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int nums[5] = {3,4,5,6,7};
    int size = 5;
    int target = 6;
     int  s=0 , e = 4 , mid,m;
        mid = s + (e-s)/2 ;
      cout<<"first mid"<<mid<<endl;
        if( target < s)
        {
          while(s<e)
          {
            s = mid+1;
            m = s+(e-s)/2;

            if(nums[m] == target)
            {
                 cout<<"target"<<m<<endl;
              return m;
            }

            if (nums[m] > target)
            {
              e = m-1;
            }
            else
            {
              s = m+1;
            }
          }

        } 
        else
        {
           while(s<e)
          {
            e = mid-1;
            m = s+(e-s)/2;

            if(nums[m] == target)
            {
                cout<<"target"<<m<<endl;
              return m;
            }

            if (nums[m] > target)
            {
              e = m-1;
            }
            else
            {
              s = m+1;
            }
          }

        }
        return -1;
}
