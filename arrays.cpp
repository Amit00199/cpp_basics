#include <iostream>
#include <vector> //vectors for dynamic arrays, preferable over standard arrays

int main ()
{

    double temperature_list[4] = {27.8, 34.5, 42.0, 44.2}; // add [] to declare an array- multiple values of a variable
    std::cout << temperature_list[2] << std::endl; // variable [index number] - the index numbers start at 0 instead of 1
    temperature_list[2] = 42.3; //to modify the variable at a particular index
    std::cout << temperature_list[2] << std::endl;
    std::cin >> temperature_list[2];
    for (int i = 0; i < 4; i++) {
        std::cout << temperature_list[i] << " ";
    }

    std::vector<double> number_list = {1.2, 2.5, 3.7}; //vectors for dyanmic arrays- any size; std::vector<variable type> 
    std::cout << number_list.at(0) << std::endl; // varaible.at(index number)
    number_list.at(0) = 1.3; // to modify the variable at a particular index
    std::cout << number_list.at(0) << std::endl;
    std::cout << number_list.size() << std::endl; //gives size of vector
    number_list.push_back(4.9); //to add an element to the vector
    std::cout <<number_list.at(3) << std::endl;
    return 0;
}