#include <iostream>

using namespace std;

/*
C++ allows to directly allocate memory at run time, this is called Dynamic Memory Allocation
in C++, we need to manually allocate and deallocate memory depending on use of variable
for this 'new' and 'delete' operators are used
*/

//malloc(), realloc(), calloc(), free()

int main() {

    int* pa;
    pa = new int;//'new' allocates memory to a variable -  here we have dynamically allocated memory for an int variable using 'new'
                //'new' operator returns the address of the memory location
    *pa = 5; //Syntax: pointerVariable = new DataType;

    cout << *pa << endl;

    //once we don't need the variable that we have declared dynamically, we can deallocate memory by using 'delete' operator

    delete pa; //Syntax: delete PointerVariable
//---------------------------------------------------------------------------------------------
    int* pb;
    float* pc;

    pb = new int;
    pc = new float;

    *pb = 45;
    *pc = 45.45;
    cout << *pb << endl;
    cout << *pc << endl;

    delete pb;
    delete pc;
//---------------------------------------------------------------------------------------------
    int d = 4;

    float* pe;
    pe = new float[d]; //allocated memory dynamically for the float array using 'new'

    cout << "Enter numbers for array: ";
    for (int i = 0; i < d; i++) {
        cin >> *(pe + i);
    }

    cout << "Numbers entered are: \n";
    for (int i = 0; i < d; i++) {
        cout << *(pe + i) << endl;
    }

    delete[] pe; //once the array is no longer needed, the memory is deallocated using delete
                //using [] after delete represents that the memory deallocation is of an array
    pe = NULL; //this is a good practice to avoid pointing to an address thats no longer being used by us
                //this means that now the array is not pointing to anything

    return 0;
}