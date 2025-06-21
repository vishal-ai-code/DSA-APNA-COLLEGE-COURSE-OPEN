//LEC 4 DSA_16-06-2025_NESTED LOOPS CONTINUOUS SQUARE ABCD PATTERN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for continuous ABCD square pattern: -\n";
    cin >> n;

    char ch = 'A';

    for (int i=0; i<=(n-1); i++) {

        for (int j=0; j<=(n-1); j++) {

            if (ch > 'Z') {
                ch = 'A';
            }

            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }

    return 0;
}