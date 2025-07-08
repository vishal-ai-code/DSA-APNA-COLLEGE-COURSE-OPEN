//LEC 10 DSA_08-07-2025_VECTORS PRINTING ALL SUB-ARRAYS AND TOTAL NUMBER OF SUB-ARRAYS

# include <iostream>
# include <vector>
using namespace std;

void printAllSubArrays(vector<int> vec) {
    cout << "All sub-arrays are: -\n";

    for (int st=0; st<vec.size(); st++) {

        for (int end=st; end<vec.size(); end++) {

            cout << "[ ";

            for (int i=st; i<=end; i++) {
                cout << vec[i] << " ";
            }

            cout << "] ";

        }

        cout << endl;
    }

    cout << endl;
    return;
}
int totalNumberOfSubArrays(vector<int> vec) {
    int count = 0;

    for (int st=0; st<vec.size(); st++) {

        for (int end=st; end<vec.size(); end++) {
            count++;
        }

    }

    return count;
}

int main() {
    vector<int> vec = {1,2,3,4,5};

    printAllSubArrays(vec);
    cout << "Total number of sub-arrays :- " << totalNumberOfSubArrays(vec) << "\n";

    return 0;
}