#include <iostream>
#include <string>

using namespace std;

class Robot { //conventionally we start the name of a class with an uppercase
 public: //to initialize attributes and methods - is available from outside of class  
    Robot(string name, int version_number) //this is called creating an object or constructor, put parameters to initialize attributes //didnt put temp in constructor as it comes from in the class itself
        : name(name), version_number(version_number), //this is a better way to initialize attributes in c++
        internal_temp(30.0)
    {                                                
    //     internal_temp = 30.0;                      //this is the old way of initializing the attributes
    //     this->name = name;                         //'this' refers to this object from class  
    //     this->version_number = version_number;     //'->' to get access to attributes and methods of class
                                                    //can use either of the two ways    
    }

    void say_hi() //create functions for methods in public
    {
        cout << "Hello, my name is " << name << ", ready to help!" << endl;
    }

    void init_hardware()
    {
        cout << "Initializing Hardware..." << endl;
    }

    void print_info()
    {
        say_hi();
        cout << "Version number: " << version_number << endl;
        cout << "Internal temperature is " << internal_temp << endl;
    }

 private: //to declare attributes, encapsulation allows to protect attributes and methods from being available outside the method of class
    string name;
    int version_number;
    double internal_temp;
}; //semicolon needed here


int main ()
{
    Robot robot1("R2D2", 320112569); //instance of class - parameters from the constructor
    robot1.init_hardware();
    robot1.say_hi();
    robot1.print_info();
    
    string input_name;
    cout << "What would you like to call me instead? (single word only) - ";
    cin >> input_name;
    Robot robot2(input_name, 320112569);
    robot2.init_hardware();
    robot2.say_hi();
    robot2.print_info();
    return 0;
}