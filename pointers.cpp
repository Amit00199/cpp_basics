#include <iostream>

using namespace std;

void print (void* ptr, char type) { //void pointer is used when multiple type of pointers can be passes as parameters
    switch(type) {  //the void pointer needs to be intialized with the pointer type before using
        case 'i': *((int*) ptr); //first intialized the void pointer to int pointer - now dereference the pointer to get the value
        case 'c': *((char*) ptr);//similary this handles char pointer
    }
}

int main() {
    int a = 10;
    cout << "Address of variable: " << &a << endl; //'&'is used to give address of the variable
    int* b; //pointers are used to store addresses rather than variables
    b = &a;//to assign addresses to pointer variable
    cout << *b << endl; //this gives the value stored in the memory location
    *b = 12; //can be used to change value of the variable that was allocated that memory
    cout << a << endl;
    int* c, d; //here c is a pointer variable and c is a normal variable
    cout << c << " " << d << endl;
    
    int *e;
    int arr[5];
    e = arr; //this stores the address of the first element of arr
    cout << e << endl;
    e = &arr[1]; //to store the address of a particular element
    cout << e << endl;
    e = arr;
    //storing address of a particular element can also be done by
    e + 1; //is equivalent to &arr[1]
    e + 2; //is equivalent to &arr[2]
    *(e + 3); //is equivalent to arr[3]
    *(e + 4); //is equivalent to arr[4]

    e = &arr[2];
    e - 2; //after initializing to 2, e -2 is equivalent to &arr[0]

    int input[5];
    cout << "Enter 5 numbers: \n";
    for (int i = 0; i < 5; i++) {
        cin >> *(input + i);
    }

    cout << "Displaying Data: ";
    for (int i = 0; i < 5; i++) {
        cout << *(input + i) << " ";
    }
    cout << endl;
    
    return 0;
}