//LEC 11 DSA_09-07-2025_VECTORS PAIR SUM BRUTE FORCE APPROACH

#include <iostream>
#include <vector>
using namespace std;

// Function for pair sum : Returns the index of the pair from the array having sum equal to target
void pairSum(vector<int> vec, int target) {
    // Loop for checking pair sum
    for (int i=0; i<vec.size(); i++) {

        for (int j=i+1; j<vec.size(); j++) {

            if (vec[i] + vec[j] == target) {
                cout << "Pair found at index " << i << " and " << j << "\n";
                cout << "Pair is (" << vec[i] << "," << vec[j] << ")" << "\n";

                return;
            }

        }

    }

    cout << "Pair not found\n";
    return;
}

int main() {
    vector<int> vec1 = {2,7,11,15};
    int target = 9;

    pairSum(vec1, target);

    return 0;
}
