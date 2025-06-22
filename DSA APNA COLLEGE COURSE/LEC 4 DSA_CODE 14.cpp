//LEC 4 DSA_16-06-2025_NESTED LOOPS INVERTED RIGHT-ANGLED TRIANGLE ABCD PATTERN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for inverted triangle ABCD pattern: -\n";
    cin >> n;

    char ch = 'A';

    for (int i=0; i<n; i++) {
        
        for (int j=0; j<i; j++) {
            cout << "  ";
        }

        for (int j=0; j<(n-i); j++) {

            if (ch > 'Z') {
                ch = 'A';
            }

            cout << (ch) << " ";
            // ch++;
        }

        ch++;
        cout << endl;
    }

    return 0;
}