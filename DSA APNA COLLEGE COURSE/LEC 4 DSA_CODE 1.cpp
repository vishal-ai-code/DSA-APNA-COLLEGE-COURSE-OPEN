//LEC 4 DSA_16-06-2025_NESTED LOOPS SQUARE/RECTANGLE NUMBER PATTERN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number for rows of square pattern: -\n";
    cin >> n;

    int m;
    cout << "Enter number for columns of square pattern: -\n";
    cin >> m;

    for (int i=0; i<=(n-1); i++) {
        for (int j=1; j<=(m); j++) {
            cout << j << " ";
            // cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}