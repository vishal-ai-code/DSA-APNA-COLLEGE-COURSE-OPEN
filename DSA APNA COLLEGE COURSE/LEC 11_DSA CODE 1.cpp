//LEC 11 DSA_09-07-2025_VECTORS PAIR SUM BRUTE FORCE APPROACH AND OPTIMIZATION

#include <iostream>
#include <vector>
using namespace std;

// Function for pair sum : Returns the index of the pair from the array having sum equal to target
void pairSum1(vector<int> &vec, int target) {
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
vector<int> pairSum2(vector<int> &vec, int target) {
    int start = 0;
    int end = vec.size()-1;

    while (start < end) {
        int currSum = vec[start] + vec[end];

        if (currSum == target) {
            return {start, end};
        } else if (currSum < target) {
            start++;
        } else {
            end--;
        }

    }

    return {};
}

int main() {
    vector<int> vec1 = {2,7,11,15};
    int target = 9;

    pairSum1(vec1, target);
    cout << "\n";

    vector<int> ans = pairSum2(vec1, target);

    cout << "Index of vector pair having sum equal to target(" << target << ") = "<<
        ans[0] << " and " << ans[1] << "\n" << "Value of vector pair = " <<
            vec1[ans[0]] << " and " << vec1[ans[1]] << "\n" << "Justification : " <<
                vec1[ans[0]] << " + " << vec1[ans[1]] << " = " << target << "\n";

    // cout << "Value of vector pair : " << vec1[ans[0]] << " and " << vec1[ans[1]] << "\n";

    return 1;
}
