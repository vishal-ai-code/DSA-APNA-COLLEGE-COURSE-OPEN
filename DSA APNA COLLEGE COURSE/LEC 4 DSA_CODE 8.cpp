//LEC 4 DSA_16-06-2025_NESTED LOOPS SAME LETTER RIGHT-ANGLED TRIANGLE PATTERN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for triangle ABCD pattern: -\n";
    cin >> n;

    char ch = 'A';

    for (int i=0; i<n; i++) {

        for (int j=0; j<(i+1); j++) {

            if (ch > 'Z') {
                ch = 'A';
            }

            cout << (ch) << " ";
            // cout << (i+1) << " ";
            // cout << (j+1) << " ";
            // ch++; [SAME RESULT AS LEC 4 DSA_CODE 11]
        }

        ch++;
        cout << endl;
    }

    return 0;
}