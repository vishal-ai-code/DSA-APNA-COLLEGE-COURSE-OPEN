//LEC 4 DSA_16-06-2025_NESTED LOOPS SAME NUMBERS RIGHT-ANGLED TRIANGLE PATTERN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for triangle number pattern: -\n";
    cin >> n;

    for (int i=0; i<n; i++) {

        for (int j=0; j<(i+1); j++) {
            cout << (i+1) << " ";
            // cout << (j+1) << " ";
        }

        cout << endl;
    }

    return 0;
}