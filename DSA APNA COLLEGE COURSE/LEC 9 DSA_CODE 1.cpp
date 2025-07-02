//LEC 9 DSA_02-07-2025_VECTORS

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3};
    cout << vec[0] << endl;

    vector<int> vec2 (3,0);
    // cout << vec2[0] << endl;
    // cout << vec2[1] << endl;
    // cout << vec2[2] << endl;

    // Loop for each int val(value) in vec2, prints each val or cout << val
    for (int val : vec2) {
        cout << val << endl;
    }

    return 0;
}