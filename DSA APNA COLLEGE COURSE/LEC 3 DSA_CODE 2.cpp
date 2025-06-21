//LEC 3 DSA_13-06-2025_IF ELSE ELIGIBLE FOR VOTE

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: -\n";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to cast vote\n";
    } else {
        cout << "You are not eligible to cast vote\n";
    }
    return 0;
}
