//LEC 4 DSA_16-06-2025_NESTED LOOPS HOLLOW DIAMOND STAR PATTERN

# include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for hollow diamond star pattern: -\n";
    cin >> n;

    for (int i=0; i<n; i++) {

        for (int j=0; j<(n-1-i); j++) {
            cout << " ";
        }

        cout << "*";

        if (i!=0) {

            for (int j=0; j<(2*i-1); j++) {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    for (int i=0; i<(n-1); i++) {

        for (int j=0; j<(i+1); j++) {
            cout << " ";
        }

        cout << "*";

        if (i!=n-2) {

            for (int j=0; j<2*(n-2-i)-1; j++) { // [ {j<2*(n-2-i)-1} or {j<2*(n-i)-5} Can also be used ]
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}