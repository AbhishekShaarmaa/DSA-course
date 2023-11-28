// C++ program to demonstrate the
// boilerplate code
#include <iostream>
#include <vector>
using namespace std;

void printf(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind == n)
    {
        
        
            for (auto it : ds)
            {
                cout << it << " ";
            }
        
        cout << endl;
        return;
    }
    printf(ind + 1, ds, arr, n);
    cout<<"ind = "<<ind<<" ds = "<<ds<<" arr = "<<arr<<" " <<" n = "<<n<<endl;
    ds.push_back(arr[ind]);
    printf(ind + 1, ds, arr, n);
    ds.pop_back(); // Remove the argument from pop_back
}

// Driver Code
int main()
{
    int arr[] = {3, 2, 1};
    int n = 3;
    vector<int> ds;
    printf(0, ds, arr, n);
    return 0;
}
