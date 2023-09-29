#include <iostream>

using namespace std;

int factorial(int);

int main ()
{
    for (int i = 0; i < 3; i++) { //for loop is divided into three segments sperated by ; 
                                  //first initialize the index (i=0), then insert condition, then progression - i is the loop control variable
                                  //variable++ stands for variable = variable + 1
        cout << "Hello" << endl;
    }

    for (int i = 0; i < 11; i++) {
        cout << "Square of " << i << " is ";
        cout << i * i << endl;
    }

    int a = 0;
    while (a < 5) { //while loop just needs a condition, index has to be created before the loop, and progression later in the code
        cout << "Hello" << endl;
        a++;
    }

//use for loop when the number of repetitions is known exactly
//if number of repetitions is unknown or the condition to continue is external to the loop use while loop


//the do while loop executes the code once before checking if the condition is true, 
//then for the second time it will repeat the loop as long as the condition is true
//condition is tested after execution
    int b = 0;
    do { 
        cout << b << endl;
        b++;
    } while (b < 6); //if the value of b was 7 then the output would be: 7, the code would execute once and then stop

//break - used to break out of a loop

    for (int i = 0; i <= 10; i++) {

        if (i == 6) {
            break; //this breaks the loop at i = 6
        }

        cout << i << endl;
    } 

//continue - this breaks the loop one time if a specified condition occurs and continues with the next iteration

    for (int i = 0; i <= 10; i++) {

        if (i == 6) {
            continue; //this loop goes till i = 6, breaks once for i = 7, then continues back
        }
    cout << i << endl;
    }

//recursion - uses a function that calls itself
        //  - to prevent infinite recursion, if ..else  or similar condition statements are used

    int n, result;
    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;

    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } 
    else {
        return 1;
    }
}