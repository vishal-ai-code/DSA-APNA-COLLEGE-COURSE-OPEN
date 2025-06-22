//LEC 4 DSA_16-06-2025_NESTED LOOPS BUTTERFLY STAR PATTERN

# include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for butterfly star pattern: -\n";
    cin >> n;

    for (int i=0; i<n; i++) {

        for (int j=0; j<(i+1); j++) {
            cout << "* ";
        }

        for (int j=0; j<(n-1-i); j++) {
            cout << "  ";
        }

        for (int j=0; j<(n-1-i); j++) {
            cout << "  ";
        }

        for (int j=0; j<(i+1); j++) {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i=0; i<n; i++) {

        for (int j=0; j<(n-i); j++) {
            cout << "* ";
        }

        for (int j=0; j<(i); j++) {
            cout << "  ";
        }

        for (int j=0; j<(i); j++) {
            cout << "  ";
        }

        for (int j=0; j<(n-i); j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}