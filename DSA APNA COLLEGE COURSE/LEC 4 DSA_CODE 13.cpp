//LEC 4 DSA_16-06-2025_NESTED LOOPS INVERTED RIGHT-ANGLED TRIANGLE NUMBER PATTERN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for inverted triangle number pattern: -\n";
    cin >> n;

    for (int i=0; i<n; i++) {

        for (int j=0; j<i; j++) {
            cout << "  ";
        }

        for (int j=0; j<(n-i); j++) {
            cout << (i+1) << " ";
        }

        cout << endl;
    }

    return 0;
}