#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    auto printHello = []() {
    cout << "Hello, World!" << endl;
    };
    printHello();

    auto add = [](int a, int b) {
    return a + b;
    };
    int result = add(3, 4);

    int multiplier = 3;
    auto times = [multiplier](int a) {
    return a * multiplier;
    };
    result = times(5);

    int expiresInDays = 45;
    auto updateDays = [&expiresInDays](int newDays) {
    expiresInDays = newDays;
    };
    updateDays(30);

    // lambda expressions are used to pass the whole code as parameters -
    // example, in the above code there were two options - 
    // make a function to check and print all elements of the vector or make a loop doing the same
    // instead, making a lambda allowed us to pass the code as a parameter in the for_each function

    /*Syntax of a lambda expression
    [capture clause](parameters) -> return_type {code};
    
    capture clause: A list of variables from the surrounding scope that the lambda function can access
        for passing by reference use [&var_name] - means that the value of the variable can be changed inside the lambda
        for passing by value use [var_name] - means that the value of the variable cannot be changed inside the lambda
        can stay empty - no variables are passed
        can write [&] - to pass all variables by reference
        can write [=] - to pass all variables by value
    parameters: The list of input parameters, just like in a regular function. Optional
    return_type: The type of the value that the lambda function will return. This part is optional,
                    -the compiler can deduce it in many cases
    function body: The code that defines the operation of the lambda function
    */

    cout << "Enter array (Put 0 for ending array input): ";
    int input;
    vector<int> array;
    while (input != 0) {
        cin >> input;
        array.push_back(input);
    }
    array.pop_back();
    int div;
    cout << "Enter number with which the whole code should be checked for divisibility: ";
    cin >> div;
    for_each(array.begin(), array.end(), [div](int x){
        if (x % div == 0) {
            cout << x << " is divisible by " << div << endl;
        }
        else {
            cout << x << " is not divisible by " << div << endl;
        }
    });

    return 0;
}