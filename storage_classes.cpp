#include <iostream>

using namespace std;

int a = 10; //global variable declaration -  available from every scope

void local_variable() {
    int b = 12; //local variable to test()
}

void static_variable() {
    static int d = 18; //static local variable exists only inside a function where it is declared
                        //but its lifetime starts when the function is called and ends only when the program ends
                        //The main difference between local variable and static variable is that,
                        //the value of static variable persists the end of the program
    ++d;

    cout << d << endl;
}

void register_variable() {
    register int e = 20;//register variables are faster than local variables as it stores the variable in 
                        //processors register rather than memory if available
                        //was deprecated in C++11
}

void thread_local_variable() {
    thread_local int f = 22; //Thread-local storage is a mechanism by which 
                         //variables are allocated such that there is one instance of the variable per extant thread.
}

int main() {
    local_variable();
    int c = 14; //local variable to main()
    //b = 16; - Error -  b not defined in main()
    static_variable();//in the first call the value of d is initialised to 18, then 1 is added and 19 is displayed
    static_variable();//in the second call, value of d is 19, then 1 is added and 20 is deisplayed
                    //if the variable d was not declared as static -  then the output would be 19 and 19


    return 0;
}