# include <iostream>
using namespace std;

int tSum_1ton(int n) {
    // int n;
    // cout << "Enter number for sum of numbers from 1 to n: -\n";
    // cin >> n;

    int sum = 0;

    for (int i=0; i<=n; i++) {
        sum = sum + i;
    }

    // cout << "Sum of 1 to " << n << " is: " << sum << "\n";
    return sum;
}
int nFactorial(int n) {
    // int n;
    // cout << "Enter number for calculation of factorial: -\n";
    // cin >> n;

    int fact = 1;

    for (int i=0; i<n; i++) {
        fact = fact * (i+1);
    }

    // cout << "Factorial of " << n << " is: " << fact << "\n";
    return fact;
}
int sumOfDigits(int num) {
    // int num;
    // cout << "Enter number for sum of it's digits: -\n";
    // cin >> num;

    int digitSum = 0;

    for (int i=0; 0<num; i++) {
        int lastDigit = num%10;
        num = num/10;
        // cout << "dgsum1 :-" << digitSum << " ";
        digitSum = digitSum + lastDigit;
        // cout << "dgsum2 :-" << digitSum << "\n";
        // cout << "Ld :-" << lastDigit << " ";
        // cout << "num :-" << num << "\n";
        // cout << "i :-" << i <<"\n";
    }

    // cout << "Sum of digits is: " << digitSum << "\n";
    return digitSum;
}
int binomalCoeff_nCr(int n, int r) {
    // int n;
    // cout << "Enter n for calculation of binomial coefficient: -\n";
    // cin >> n;

    // int r;
    // cout << "Enter r for calculation of binomial coefficient: -\n";
    // cin >> r;

    int z = nFactorial(n);
    int d = nFactorial(r);
    int q = nFactorial(n-r);

    double a = (d * q);
    double b = (z/a);

    // cout << "Binomial coefficient (nCr) is: " << b << "\n";

    return b;
}

int main() {
    // tSum_1ton();


    // int x;
    // cout << "Enter number for calculation of factorial: -\n";
    // cin >> x;
    // nFactorial(x); // Pass By Value


    // int s;
    // cout << "Enter number for sum of digits: -\n";
    // cin >> s;
    // sumOfDigits(s);


    int a;
    cout << "Enter number n for calculation of nCr: -\n";
    cin >> a;

    int b;
    cout << "Enter number r for calculation of nCr: -\n";
    cin >> b;

    cout << "Value of nCr is : " << binomalCoeff_nCr(a,b);

    return 0;
}