//LEC 8 DSA_01-07-2025_ARRAYS ADDING VALUES IN ARRAY USING LOOP AND THEN PRINTING THEM

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter number of student for which marks are to be entered:- ";
    cin >> size;

    int marks[size];

    cout << "Press enter after entering marks of each student\n";

    //LOOPS: O TO SIZE-1
    for (int i=0; i<size; i++) {
        cout << "Enter marks of student " << i+1 << ":- ";
        cin >> marks[i];
        //cout << endl;
    }

    cout << "Marks of all students :\n";

    //LOOPS: O TO SIZE-1
    for (int i=0; i<size; i++) {
        cout << "Student " << i+1 << " obtained : " << marks[i] << " marks" << endl;
    }

    return 0;
}