//LEC 4 DSA_16-06-2025_NESTED LOOPS CONTINUOUS SQUARE NUMBER PATTERN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for continuous square number pattern: -\n";
    cin >> n;

    int count = 1;

    for (int i=0; i<=(n-1); i++) {

        for (int j=0; j<=(n-1); j++) {
            cout << count << " ";
            count++;
        }

        cout << endl;
    }

    return 0;
}