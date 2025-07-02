//LEC 8 DSA_02-07-2025_ARRAYS REVERSE OF AN ARRAY ALGORITHM

# include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size-1;

    // Revereses the elements of the array by using 2 pointer logic and swap function
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reveresed array :\n";

    // Prints the reversed array
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    // cout << size << "\n";

    // Function that reverses and prints the original array after the change
    reverseArray(arr, size);

    // Can also be done in the main function
    // for (int i=0; i<size; i++) {
    //     cout << arr[i] << " ";
    // }

    return 0;
}
