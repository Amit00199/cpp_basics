#include <iostream>
#include <vector>

using namespace std;

//passing parameters to function by copy or reference

void add_zeroes(vector<int> number_list, int zeros_number) //copy- when you want to pass an array/vector/object to a function and you dont want to modify it in the function
                                                          //this creates a temporary copy of the actual variable, 
                                                          //which is then destroyed after the scope of the function
                                                          //Here the vector list is copied into add_zeroes, the copy is modified,
                                                          //and is then destroyed after this function
{
    for (int i = 0; i < zeros_number; i++){
        number_list.push_back(0);
    }
        cout << "B. Size of number list: " << number_list.size() << endl;

}

void add_zeroes_to_list(vector<int> &number_list, int zeros_number) //reference- when you want to pass an array/vector/object to a function and you want to modify it in the function
                                                                    //putting an '&' before the local variable
                                                                   //makes it so that the original variable replaces the local variable 
                                                                   //and is returned after code execution of that function
                                                                  //Here the vector list replaces number_list in add_zeroes_to_list, 
                                                                  //and then is sent back to the main function
{
    for (int i = 0; i < zeros_number; i++){
        number_list.push_back(0);
    }
        cout << "D. Size of number list: " << number_list.size() << endl;

}

//for big arrays that dont want to be copied or modified: const is used for functions that need references but dont want to be modified
void print_all_elements (const vector<int> &list) //for example if an array has 10000 elements, copying will not be practical
                                                  //for extra security we add const before the vector, so it cannot be modified in the code
{
    for (int number: list) {
        cout << number << " ";
    }
    cout << endl;
}

void display(char = '*', int = 3); //defining the default arguments - will be used if no parameter is passed to the code


int main ()
{
    vector<int> list = {5, 5, 4};
    cout << "A. Size of number list: " << list.size() << endl;
    add_zeroes(list, 4);
    cout << "C. Size of number list: " << list.size() << endl;
    add_zeroes_to_list(list, 6);
    cout << "E. Size of number list: " << list.size() << endl;
    print_all_elements(list);

    cout << "No arguments passed: \n";
    display(); //uses the default arguments
    cout << "First argument passed: \n";
    display('#'); //uses the first variable from the code and the other from default definition - has to be done in order
                 //example: here int cannot be only declared, a char has to be declared only then can int be declared
    cout << "Both arguments passed: \n";
    int count = 5; 
    display('$', count); //both arguments passed from main

    return 0;
}

void display(char c, int count) {
    for (int i = 1; i <= count; ++i) {
        cout << c;
    }
    cout << endl;
}