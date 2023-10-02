#include <iostream>

using namespace std;

void func1(int*, int*);
void func2(int &a, int &b) { //because of the '&', this function will accept addresses as parameters- actual value gets passed

}
// void func3(int, int);
//how do i initialize function in a way that i can input &a in definiton

int main() {
    
    int a = 5;
    int b = 10;

    func1(&a, &b); //function is called by passing addresses
    func2(a, b);
    return 0;
}

void func1(int* a, int* b) { //as addresses are passed during function call - 
                                //dereference operator '*' is used to access value in the addresss

}
// void func3 (int &a, int &b) {

// }