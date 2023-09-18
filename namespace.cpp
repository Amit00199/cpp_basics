#include <iostream>

namespace abc {  //used to group several functionalities of a library together

    int triple_number (int number)
    {
        return number * 3; 
    }

    void cout() {}

};         

using namespace std; //this removes the need of using std:: everywhere making code more readable and less bloated, 
                    //only use it for very common otherwise it can cause collissions

void print_triple_number(int number) 
{
    cout << abc::triple_number(number) << endl;
}

int main ()
{
    print_triple_number(6);
    return 0;
}