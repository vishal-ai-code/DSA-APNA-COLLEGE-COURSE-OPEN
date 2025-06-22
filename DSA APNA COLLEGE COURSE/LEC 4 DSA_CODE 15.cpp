//LEC 4 DSA_16-06-2025_NESTED LOOPS PYRAMID NUMBER PATTERN

# include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for pyramid number pattern: -\n";
    cin >> n;

    for (int i=0; i<n; i++) {

        for (int j=0; j<(n-1-i); j++) {
            cout << "  ";
        }

        for (int j=0; j<(i+1); j++) {
            cout << (j+1) << " ";
        }

        for (int j=0; j<(i); j++) {
            cout << (i-j) << " ";
        }

        cout << endl;
    }

    return 0;
}