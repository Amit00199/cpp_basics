#include <iostream>
#include <cmath> //introduce math function like sqrt, rounding off, log, etc

using namespace std;

int main() {
    int a = 2;
    int b = 7;
    int c = 69;
    double d = 100.24;
    int e = 1089;
    cout << max(a, b) << endl; //gives the maximum of two numbers- two values only
    cout << min(a, b) << endl; //gives the minimum of two umbers- two values only
    cout << sqrt(e) << endl; //square root of value
    cout << round(d) << endl; //rounds off to nearest int
    cout << log(2) << endl; //finds logarithm of a number
    /*
    Some other functions are:
    trigonometric functions
    exponential and logarithmic functions
    power functions -  pow, sqrt, cbrt, hypot
    gamma functions
    rounding and remainder functions
    */
    
    return 0;
}