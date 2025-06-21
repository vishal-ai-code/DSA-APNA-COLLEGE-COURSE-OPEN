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

            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }

    return 0;
    // [SAME RESULT AS LEC 4 DSA_CODE 8]
}