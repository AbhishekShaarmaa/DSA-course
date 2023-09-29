
#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int size) {
    int start = 0;
    int end = size - 1;
    int first = -1 ;
    int last = 0 ;
     cout<<"last = "<<last << endl;

    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid without potential overflow
        cout << "mid value: " << mid << endl;
      

        if (key == arr[mid]) {
            first = mid ;
            last = mid ;
            return mid;
        }

        if (key > arr[mid]) {
            last = mid +1;
             cout<<"last_1 = "<<last << endl;
            start = mid + 1;
        } else {
            first = mid -1;
            end = mid - 1;
        }
       
    }
     cout<<"first = "<<first << endl;
     cout<<"last = "<<last << endl;

    return -1;
}

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int key = 3;

    int index = binarySearch(arr1, key, 5);
    cout << "Binary search result: " << index << endl;

    return 0;
}
