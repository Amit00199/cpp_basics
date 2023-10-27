#include <iostream>
using namespace std;

int main() {

    // A 2-D array is a collection of 'rows' number of arrays, each containing 'cols' elements

    int  two_d[2][3] = {{2, 4, 5}, {9, 0, 19}}; //initializing a 2-D array - groups of 'j' elements 'i' times
    //data_type array_name[rows][columns];        

    int two_d_array[2][3]; //creating a 2-D array with inputs

    cout << "Enter 6 numbers: " << endl;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> two_d_array[i][j];
        }
    }

    cout << "The numbers are: " << endl;

    for (int i = 0; i < 2; ++i) { //to print 2-D array
        for (int j = 0; j < 3; ++j) {
            cout << "two_d_array[" << i << "][" << j << "]: " << two_d_array[i][j] << endl;
        }
    }

    int three_d_array[2][3][4] = { //'k' elements in one group 'j' times, this thing 'i' times
        { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
        {{13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9}}
        };

    for (int i = 0; i < 2; ++i) { //to print 3-D array
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                cout << "three_d_array[" << i << "][" << j << "][" << k << "]: " << three_d_array[i][j][k] << endl;
            }
        }
    }

    return 0;
}