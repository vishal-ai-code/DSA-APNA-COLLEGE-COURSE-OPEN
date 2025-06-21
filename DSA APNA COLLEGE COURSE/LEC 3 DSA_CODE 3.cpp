//LEC 3 DSA_15-06-2025_LOOP SUM OF N NUMBERS FROM 1 TO N

#include <iostream>
using namespace std;

int main() {
    int numberCount;
    cout << "Enter the number till you want to see sum for: -\n";
    cin >> numberCount;

    int count = 1;
    int sum = 0;

    // For Sum of all numbers
    while (count <= numberCount) {
        sum = sum + count;
        //cout << "Sum of numbers from 1 to " << count << " is:" << sum << "\n";
        count++;
    }

    //  // For Sum of odd numbers
    //  while (count <= numberCount) {
    //      if (count%2 != 0) {
    //          sum = sum + count;
    //      }
    //      //cout << "Sum of odd numbers from 1 to " << count << " is:" << sum << "\n";
    //      count++;
    // }

    // // For Sum of even numbers
    // while (count <= numberCount) {
    //     if (count%2 == 0) {
    //         sum = sum + count;
    //     }
    //     //cout << "Sum of even numbers from 1 to " << count << " is:" << sum << "\n";
    //     count++;
    // }

    cout << "Sum of numbers from 1 to " << numberCount << " is: -\n";
    cout << sum << "\n";

    return 0;
}