//LEC 9 DSA_02-07-2025_VECTORS

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Vector syntax initialization
    vector<int> vec = {1,2,3};

    // Vector syntax initialization
    vector<int> vec2 (3,0);
    // cout << vec2[0] << endl;
    // cout << vec2[1] << endl;
    // cout << vec2[2] << endl;

    // Loop for each int val(value) in vec2, prints each val or cout << val
    cout << "Elements in vector vec2 before push back:-\n";
    for (int val : vec2) {
        cout << val << endl;
    }

    // Prints the first value of vec
    cout << "Fisrt value of vec : " << vec[0] << endl;

    // Prints the size of vec and vec2
    cout << "Size of vec and vec2:-\n";
    cout << vec.size() << endl;
    cout << vec2.size() << endl;

    // Push back 4 to vec2 (Adds 4 to the end of the vector)
    vec2.push_back(4);

    // Loop for each int val(value) in vec2, prints each val or cout << val
    cout << "Elements in vector vec2 after push back:-\n";
    for (int val : vec2) {
        cout << val << endl;
    }

    // Pop back the last element of vec2 (Deletes last element of vec)
    vec.pop_back();

    // Loop for each int val(value) in vec, prints each val or cout << val
    cout << "Elements in vector vec after pop back:-\n";
    for (int val : vec) {
        cout << val << endl;
    }







    return 0;
}