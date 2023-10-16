#include <iostream>

using namespace std;

int main() {

    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    /*
    A 2-D array is a collection of 'rows' number of arrays, each containing 'cols' elements
    example - 
    cols = 5, rows = 3; first 3 arrays are created with 5 elements each, 
    then the address of each of the arrays is stored as another array of pointers, 
    whose address is in turn stored at another location which can be accessed to access all the elements of all 3 arrays
    */


    int** table = new int*[rows]; //the **table makes a pointer to a pointer - meaning points to an array of pointers
    for (int i = 0; i < rows; i++) {
        table[i] = new int [cols]; //this creates an array of [cols] elements for each value of 'rows' - 
                                    //makes 'rows' arrays of 'cols' elements
    }

    table[1][2] = 88; //to access elements in the array - goes to index 1 in the array of pointers, 
                        //then in that index goes to element with index 2

    //deallocation of memory takes place in the opposite order of allocation

    for (int i = 0; i < rows; i++) {
        delete[] table[i]; //first all the 'rows' number of arrays are deallocated using a loop
    }
    
    delete[] table; //then the array containing the addresses to the arrays is deallocated
    table = NULL; //finally the address of the pointer containing array is changed to NULL - doesnt point to anything

    return 0;
}