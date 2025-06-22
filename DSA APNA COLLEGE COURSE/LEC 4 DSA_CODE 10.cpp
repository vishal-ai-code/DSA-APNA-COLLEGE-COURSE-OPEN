//LEC 4 DSA_16-06-2025_NESTED LOOPS CONTINUOUS NUMBER RIGHT-ANGLED TRIANGLE PATTERN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for triangle number pattern: -\n";
    cin >> n;

    int count = 1;

    for (int i=0; i<n; i++) {

       for (int j=0; j<(i+1); j++) {
           cout << count << " ";
           count++;
       }

        // count++; [SAME RESULT AS LEC 4 DSA_CODE 7]
        cout << endl;
    }

    return 0;
}