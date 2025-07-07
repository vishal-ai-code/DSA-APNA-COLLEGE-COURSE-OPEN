# include <iostream>
# include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,-2,0,3,-9,10,-1,-5};

    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i=0; i<vec.size(); i++) {

        if (vec[i]<0) {
            vec[i] = 0;
        }

        currSum = currSum + vec[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0) {
            currSum = 0;
        }

    }

    cout << "Maximum subarray sum : " << maxSum << endl;

    return 0;
}
