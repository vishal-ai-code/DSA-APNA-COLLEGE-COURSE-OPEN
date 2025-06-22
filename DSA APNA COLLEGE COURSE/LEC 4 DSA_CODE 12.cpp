//LEC 4 DSA_16-06-2025_NESTED LOOPS REVERSE ABCD RIGHT-ANGLED TRIANGLE PATTERN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for triangle ABCD reverse pattern: -\n";
    cin >> n;

    if (n<=26) {

        for (int i=0; i<n; i++) {
            char ch = 'A' + i;

            for (int j=0; j<(i+1); j++) {
                cout << char(ch-j) << " ";
            }

            cout << endl;
        }
    } else {
        cout << "Invalid input, enter number <=26";
    }

    return 0;
}