// LEC 3 DSA_13-06-2025_IF ELSE CHAR LOWERCASE OR UPPERCASE

#include <iostream>
using namespace std;

int main() {
    // Way 1
    char ch;
    cout << "Enter a character: -\n";
    cin >> ch;

    cout << int(ch) << "\n";
    // ASCAII VALUES 97-122 is the range for a-z

    if (ch >= 'a' && ch <= 'z') {
        cout << "Character is lowercase\n";
    } else {
        cout << "Character is uppercase\n";
    }

    //Way 2
    char a;
    cout << "Enter a character: -\n";
    cin >> a;

    cout << int(a) << "\n";
    // ASCAII VALUES 65-90 is the range for A-Z

    if (a >= 65 && a <= 90) {
        cout << "Character is uppercase\n";
    } else {
        cout << "Character is lowercase\n";
    }

    return 0;
}