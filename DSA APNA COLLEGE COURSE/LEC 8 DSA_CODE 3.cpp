//LEC 8 DSA_01-07-2025_ARRAYS LINEAR SEARCH ALGORITHM

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {

    for (int i=0; i<size; i++) {

        if (arr[i] == target) {
            cout << "Index = " << i;
            return i;
        }

    }

    return -1;
}

int main() {
    int arr[] = {4,2,7,1,2,5,9,3,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 80;

    cout << linearSearch(arr, size, target);

    // cout << size << "\n";

    return 0;
}