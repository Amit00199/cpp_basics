#include <iostream>

void say_hello () //void data type means no return
{
    std::cout << "Hello" << std::endl;
}

void greet(std::string user_name, int user_age) //parameter in () - data type and name it- variable in that function, multiple variables possible

{
    std::cout << "Hello " << user_name << " you are " << user_age << " years old." << std::endl;

}

int triple_number (int number) //number is a local variable- only available inside this function, is destroyed after this function
{
    return number * 3; //can also be written by making another variable- answer = number * 3, return answer- but thats long and not useful
                       //any variable declared in a function has to be initialized in the same function
}

int a; //global variable- will be available from every scope (any function)

void print_triple_number(int number) //can use a function in another function -this number variable is a different variable,
                                    //its possible to have different variables with the same name in different functions
{
    std::cout << triple_number(number) << std::endl;

}

int main ()
{
    say_hello(); //functions- block of code that can be reused later in the program
    greet("Amit", 20); // for functions with parameters the value has to be given
    greet("Bob", 34);
    int result = triple_number(4);
    std::cout << result << std::endl;
    print_triple_number(6); //directly prints using function in a function, so makes it easier, unlike making another variable like above
    int b;

    {
        a = 5; //from a global variable, so available in every scope
        b = 6; //inside the variables scope
        int c; //this variable is exclusive to this scope as it was declared here
        c = 7;

    }

    std::cout << a << b << std::endl; //c cant be printed as its not in this scope


    return 0;
}