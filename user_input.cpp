#include <iostream>

int main ()
{
    std::string user_name, pet_name;
    std::cout << "What is your name? "; //no endl to keep it on the same line
    std::cin >> user_name; // to take input from the user- to exit program without giving input press ctrl+c- does not need endl or end >>
    std::cout << user_name << std::endl;
    
    std::cout << "\n\nWhat is your pet name? ";
    getline(std::cin, pet_name);
    std::cout << pet_name << std::endl;

    return 0;
}