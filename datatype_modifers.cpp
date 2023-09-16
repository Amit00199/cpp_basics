#include <iostream>

using namespace std;

//use sizeof();
int main() {
//                          Size                   Meaning 
    signed int;//           4                   used for integers
    unsigned int;//         4                   only positive int
    short;//                2                   small integers          -      -32768 to 32767
    unsigned short;//       2                   small positive int      -       0 to 65,535
    long;//                 at least 4          used for large int
    unsigned long;//        4                   used for large positive int
    long long;//            8                   used for very large int
    unsigned long long;//   8                   used for very large positive int
    long double;//          12                  used for large floating point numbers
    signed char;//          1                   used for characters     -      -127 to 127
    unsigned char;//        1                   used for characters     -       0 to 255

/*
    more data loss as the list goes down

        Higher Data Type

            long double
            double
            float
            long
            int
            short
            char

        Lower Data Type
    
    no data loss as the list goes up
*/


    return 0;
}