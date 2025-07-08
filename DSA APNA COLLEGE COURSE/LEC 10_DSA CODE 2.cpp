//LEC 10 DSA_08-07-2025_VECTORS MAXIMUM SUB-ARRAY SUM

# include <iostream>
# include <vector>
using namespace std;

int BruteForce_MSAS(vector<int> vec) {
    int maxSum = INT_MIN;

    for (int st=0; st<vec.size(); st++) {
        int currSum = 0;

        for (int end=st; end<vec.size(); end++) {
            currSum = currSum + vec[end];
            maxSum = max(maxSum, currSum);
        }

        // Can also be done like this....
        // for (int end=st; end<vec.size(); end++) {
        //     int currSum = 0;
        //
        //     for (int i=st; i<=end; i++) {
        //         currSum = currSum + vec[i];
        //     }
        //
        //     maxSum = max(maxSum, currSum);
        // }

    }

    return maxSum;
}
int KadanesAlgorithm_MSAS(vector<int> vec) {
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i=0; i<vec.size(); i++) {
        currSum = currSum + vec[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0) {
            currSum = 0;
        }

    }

    return maxSum;
}

int main() {
    vector<int> vec = {3,-4,5,4,-1,7,-8};
    vector<int> vec2 = {1,2,3,4,5,6};

    cout << "Max subarray sum = " << BruteForce_MSAS(vec) << endl;
    cout << "Max subarray sum = " << KadanesAlgorithm_MSAS(vec) << endl;

    return 0;
}
