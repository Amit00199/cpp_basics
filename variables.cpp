#include <iostream>

int main ()
{
    int number = 3; //int for only integer numbers
    double temperature = 20.67; //double for numbers with decimals
    float mini_decimal = 23.3; //float is used for fewer digits of precision after decimal, for larger number of digits, double is used
    char letter = 'a';// char for single letters
    wchar_t letters = L'ピ'; //used when you need to store a character over ASCII 255 - mainly used for foreign languages
    bool is_alive = true; //bool or boolean for true or false (1 or 0)
    std::string user_name = "Amit"; //std::string for text
    int a;
    a=2;
    int b = a+4;
    const int x = 10; //add 'const' before variable to make it unchangeable in further code (has to be initialized in same line)

    std::cout << a + number * b << std::endl;
    std::cout << "1 for true = " << is_alive << std::endl;
    std::cout << user_name << " says its too hot, its " << temperature << std::endl;
    std::cout << x << std::endl;
    std::cout << letters;

    return 0;
}
