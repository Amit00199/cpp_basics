#include <iostream>

using namespace std;

//two or more functions can have the same name but different arguments are known as overloaded functions

int test() {}
int test(int a) {}
//double test(int a) {}- Error - overloaded functions may or may not have different types, but they must have different arguments 
float test(double a) {}
int test(int a, double b) {}


//example of overloading for different datatypes

double abs(double var) {
    if (var < 0.0) {
        var =  -var;
    }
    return var;
}

int abs(int var) {
    if (var<0) {
        var = - var;
    }
    return var;
}

int main() {

    cout << "Absolute Value of -5: " << abs(-5) << endl; //as this is an int value, it goes to the function with int parameters
    cout << "Absolute Value of -5.5: " << abs(-5.5) << endl; //similarly this goes to the function with double variable

    return 0;
}