//LEC 8 DSA_01-07-2025_ARRAYS FINDING SMALLEST AND LARGEST VALUE IN ARRAY

# include <iostream>
using namespace std;

int main() {
    int array[] = {5,15,22,1,-15,24};
    int smallest = INT_MAX; // Can also use INT_MAX (MEANING INFINITY) in place of array[0]

    // Size of array is 6 and loop runs from 0 to 6-1
    for (int i=0; i<6; i++) {

        if (array[i] < smallest) {
            smallest = array[i];
        } else {
            smallest = smallest;
        }

    }

    cout << "Smallest value in array is: " << smallest << "\n";

    return 0;
}