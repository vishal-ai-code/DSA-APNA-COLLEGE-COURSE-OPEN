//LEC 4 DSA_16-06-2025_NESTED LOOPS REVERSE NUMBER RIGHT-ANGLED TRIANGLE PATTERN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for reverse triangle number pattern: -\n";
    cin >> n;

    for (int i=0; i<n; i++) {

        for (int j=(i+1); j>(0); j--) {
            // cout << (i+1) << " ";
            cout << (j) << " ";
        }

        cout << endl;
    }

    return 0;
}