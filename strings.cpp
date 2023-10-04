#include <iostream>
#include <string>

using namespace std;

int main() {

    string first_name = "Amit ";
    string mid_name = "S ";
    string last_name = "Sahu";

    string full_name = first_name.append(mid_name).append(last_name); //to append strings together

    cout << full_name << " " << full_name.length(); //.length gives the size of the string

    last_name = mid_name + last_name; //we can use the '+' operator to add strings
    cout << last_name;
    
    string input;
    cout << "\nEnter string: ";
    getline(cin, input);//getline takes the input stream as the first parameter, and second parameter as the location of the line
    char input1[15];//another way of defining strings of a particular size
    cin.get(input1, 12);//specifies the number of characters as input - works for array of chars type
    cout << input;

    //a null character '/0' is added to the end of a string, automatically by the compiler

    string test = "abcdef";
    string copyy = "ghijkl";
    test.push_back(' ');//push_back adds characters at the back of a string
    test.pop_back();//pop_back removes one character from the end of the string
    test.length();//gives the length of the string
    test.capacity();//gives the current size allocated to the string
    test.resize(3);//used to increase or decrease of the string
    test.shrink_to_fit();//used to decrease the strings capacity to make it equal to the strings minimum capacity
    test.begin();//points to the beginning of the string
    test.end();//points to the end of the string - will always point to the null character
    test.rbegin();//stands for reverse beginning - used to point to the last character of the string
    test.rend();//stands for reverse ending - points to the first charcter of the string
    test.copy(input1, 3, 2);//copies 3 chars from index 2 to input1 - works for array of chars type
    test.swap(copyy);//swaps one string with another


    return 0;
}