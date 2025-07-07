//LEC 9 DSA_07-07-2025_VECTORS SINGLE NUMBER PROBLEM

#include <iostream>
#include <vector>
using namespace std;

// Function to print the number in the vector which does not repeat, it appears only once
int singleNumber(vector<int> &vec) {
    // initializing ans = 0
    int ans = 0;

    // Loop for cheaking unique value
    for (int i=0; i<vec.size(); i++) {
        // Using XOR(^) bitwise opperator
        ans = ans ^ vec[i];
    }

    // If ans is 0 it may have 3 possibilities
    // 1. There is no unique element (0 does not exist in the vector)
    // 2. 0 may be the unique element (if 0 exists in the vector, cheaked by counting number of 0 in vector)
    // 3. 0 is the unique element (if only one 0 exists in the vector)

    // Cheaking conditions for ans = 0 (Is 0 the unique element or is there no unique element)
    if (ans == 0) {
        // initializing count for counting number of 0 in the vector
        int count = 0;

        // Loop for cheaking number of 0 in the vector
        for (int i=0; i<vec.size(); i++) {

            if (vec[i] == 0) {
                count++;
            }

        }

        if (count == 0) {
            // Can also use logical OR for [count == 0 || count > 1]
            // There is no 0 in the vector and there exist no unique element
            cout << "There is no unique element\n";
            return -1;
        } else if (count == 1) {
            // There is only one 0 in the vector and it is the unique element
            return 0;
        } else if (count > 1) {
            // There is more the one 0 in the vector and there is no unique element
            cout << "There is no unique element\n";
            return -1;
        }

    }

    // Returns non-zero unique element as ans
    return ans;
}

int main() {
    // Given Vector
    vector<int> vec = {4,1,2,1,2};

    // Caling the funtion to find/cheak unique value in the vector
    cout << "Unique element of the vecotor :- " << singleNumber(vec);

    return 0;
}