#include <iostream>

using namespace std;

/*The order of priority given to these operators are:
Assignment > Arithmetic > Relational > Logical > Bitwise*/

void aritmetic_operators () {
    int x = 10;
    int y = 2;
    cout << "Arithmetic Operations" << endl;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Modulus: " << x % y << endl; //returns the division remainder
    cout << "Incrememnt: " << x++ << endl; //add 1 after the line ends
    cout << "Incrememnt: " << ++x << endl; //add 1 before the line ends
    cout << "Decremement: " << x-- << endl; //subtracts 1 before the line ends
    cout << "Decremement: " << --x << endl; //subtracts 1 after the line ends
}

void assignment_operators() { //These are used to assign values to variables- the short hand properties are used to simplify the code.
    cout << "Assignment Operations\n";
    int x = 5;
    x += 3; //same as x = x + 3
    cout << x << endl;
    x -= 3; //same as x = x - 3
    cout << x << endl;
    x *= 3; //same as x = x * 3
    cout << x << endl;
    x /= 3; //same as x = x / 3
    cout << x << endl;
    x %= 3; //same as x = x % 3
    cout << x << endl;
    x ^= 3; //same as x = x ^ 3
    cout << x << endl;
    x >>= 3; //same as x = x >> 3
    cout << x << endl;
    x <<= 3; //same as x = x << 3
    cout << x << endl;

}

void relational_operators() { //These are used to compare to values. These return values as either true (1) or false (0)
    cout << "Relational Operations\n";
    int x = 7;
    x = 5 && x < 10; //Logical AND- Returns 1 only if both statements are true
    x < 5 || x <8; //Logical OR- Returns 1 if any one of the statements is true
    !(x = 5 && x < 10); //Logical NOT- Inverts the given result. Output is 1 for false and 0 for true.
    !(x < 5 || x <8);
}

void bitwise_operators() { //convert the numbers into Binary- performs operation- convert answer to decimal
    cout << "Bitwise Operations\n";
    int a = 10;
    int b = 12;
    int c = a & b; //performs AND in binary
    cout << c << endl;
    c = 5 | 7; //perform OR in binary
    cout << c << endl;
    c = 5 ^ 7; //performs XOR in binary
    cout << c << endl;
    c = 6 << 1; //shifts one bit to the left
    cout << c << endl;
    c = 6 >> 1; //shifts one bit to the right
    cout << c << endl; //For left shift multiply the number by 2 for right shift divide the number by 2
}

void other_common_operators() {
    cout << "Other Common Operators\n";
    cout << sizeof(int) << endl; //returns the size of datatype
    int a = 10;
    cout << &a << endl; //& is used to represent the address of the operand
}

int main() {
    aritmetic_operators();
    assignment_operators();
    relational_operators();
    bitwise_operators();    
    other_common_operators();

    return 0;
}