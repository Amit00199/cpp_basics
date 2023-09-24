#include <iostream>

using namespace std;

int main()
{
    cout << boolalpha; //this line prints true/false instead of 1/0 in boolean

    cout << true << endl;
    cout << false << endl;

    cout << (1 == 1) << endl; //to test equality of two values
    cout << (1 == 2) << endl;

    cout << (1 != 2) << endl; //to test inequality of two values
    cout << (1 < 2) << endl;
    cout << (1 <= 1) << endl;
    cout << (2 >= 1) << endl;
    //6 total operators- ==, !=, <, <=, >, >=
    cout << ("hello" == "Hello") << endl; //can be used for all data types

    cout << ((1 ==1) || (3 ==4)) << endl; //operator || stands for 'or' - combination of 2 conditional statements
    cout << ((1 ==1) && (3 ==4)) << endl; //operator && stands for 'and'

    double temperature = 25.0;
    cout << ((temperature >= 20.0) && (temperature < 30.0)) << endl;

    temperature = 32.0;
    cout << ((temperature >= 20.0) && (temperature < 30.0)) << endl;

    return 0;
}