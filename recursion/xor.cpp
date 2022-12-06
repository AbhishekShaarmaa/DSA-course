#include <iostream>
using namespace std;
bool finduniquelement(int *arr, int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
    return ans;
}

int main()
{
    int n=5;
    int arr[5] = {1, 1, 2, 2, 5};

    finduniquelement(arr, n);

    return 0;
}