//LEC 4 DSA_16-06-2025_NESTED LOOPS SQUARE/RECTANGLE ABCD PATTERN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows for ABCD square pattern: -\n";
    cin >> n;

    int m;
    cout << "Enter number of columns for ABCD square pattern: -\n";
    cin >> m;

    for (int i=0; i<=(n-1); i++) {
        char ch = 'A';
        for (int j=0; j<=(m-1); j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}
