#include <iostream>

using namespace std;


int main() {

    cout << "Backspace\b"; //backspaces 1 character - can be repeated
    cout << "Form feed\f"; //form feed character is a control character that tells the printer to advance to the next page -
                           //usually used to seperate different sections
    cout << "Newline\n"; //moves to the next line
    cout << "Return\r"; //typically moves the cursor or insertion point to the beginning of the current line
    cout << "Horizontal tab\t";
    cout << "Vertical tab\v";
    cout << "Backslash\\";
    cout << "Single Quotation mark\'";
    cout << "Double Qotation mark\"";
    cout << "Question mark\?";
    cout << "Null character\0";
    cout << "Different \
                            Lines";
    cout << "Alarm/Beep Sound\a";
    cout << "Octal number\101"; //to represent value of an octal number \nnn
    cout << "Hexadecimal number\x41"; //to represent value of an hexadecimal number \xhh

    return 0;
}