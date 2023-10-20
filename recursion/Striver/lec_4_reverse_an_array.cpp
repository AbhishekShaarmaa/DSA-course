// reverse a sorted array

#include <iostream>
using namespace std;

int reverse_arr(int arr[], int n, int s, int e)
{

    if (s > e)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }

        return 0;
    }

    if (s <= e)
    {
        swap(arr[s], arr[e]);
        reverse_arr(arr, n, s + 1, e - 1);
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int s = 0;
    int e = 4;

    reverse_arr(arr, 5, s, e);

    return 0;
}
