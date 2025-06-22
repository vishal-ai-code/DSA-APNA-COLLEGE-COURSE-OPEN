# include <iostream>
using namespace std;

bool cheakPrime(int n) {
    // bool prime = true;

    for (int i=2; i<n; i++) {

        if (n % i == 0) {
            // prime = false;
            // cout << n << " is not a prime number\n";
            return false;
        }

    }

    // if (prime = true) {
    //     cout << n << " is a prime number\n";
    // }

    return true;
}
void printPrime_toN(int n) {
    cout << "Prime numbers from 2 to " << n << " are: -\n";

    for (int i=2; i<=n; i++) {

        if (cheakPrime(i)==true) {
            cout << i << " ";
        }

    }

    cout << "\n";

    return;
}
void printNthFibonacci(int n) {
    int a = 0;
    int b = 1;
    int c;

    for (int i=0; i<=n; i++) {
        c = a + b;
        a = b;
        b = c;
        // cout << c << " "; [To print the whole series]
    }

    cout << "The " << n << "th fibonacci number in the fibonacci series is: " << c << "\n";

    return;
}

int main() {
    int n;
    cout << "Enter a number to cheak if prime or not :-\n";
    cin >> n;

    if (cheakPrime(n)==true) {
        cout << n << " is a prime number\n";
    } else {
        cout << n << " is not a prime number\n";
    }

    printPrime_toN(n); // Prints all prime numbers from 2 to n

    printNthFibonacci(n); // Prints the nth fibonacci number in the series

    return 0;
}