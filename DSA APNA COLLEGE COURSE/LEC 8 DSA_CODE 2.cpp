//LEC 8 DSA_01-07-2025_ARRAYS FINDING SMALLEST AND LARGEST VALUE IN ARRAY

# include <iostream>
using namespace std;

int main() {
    int array[] = {5,15,22,1,-15,24};
    int smallest = INT_MAX; // Can also use INT_MAX (MEANING INFINITY) in place of array[0]
    int largest = INT_MIN; // Can also use INT_MIN (MEANING -VE INFINITY) in place of array[0]

    // Size of array is 6 and loop runs from 0 to 6-1
    for (int i=0; i<6; i++) {

        // Condition to cheak for smallest
        if (array[i] < smallest) {
            smallest = array[i];
        } else {
            smallest = smallest;
        }

        // Can also be done by inbuilt function 'min', sets smallest to minimum of smallest and array[i]
        // smallest = min(smallest, array[i]);

        // Condition to cheak for largest
        if (array[i] > largest) {
            largest = array[i];
        } else {
            largest = largest;
        }

        // Can also be done by inbuilt function 'max', sets largest to maximum of largest and array[i]
        // largest = max(largest, array[i]);

    }

    cout << "Smallest value in array is: " << smallest << "\n";
    cout << "Largest value in array is: " << largest << "\n";

    return 0;
}