#include <iostream>

using namespace std;

//Template is used to pass the data type as a parameter so that the same code doesnt need to be writter for different datatypes
//syntax:
//template <typename T>

template<typename T>

void Swap (T &a, T &b) { //now this function can be used for any datatype
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    float c, d;
    char e, f;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter two decimals: ";
    cin >> c >> d;
    cout << "Enter two characters: ";
    cin >> e >> f;
    
    cout << a << "-" << b << endl;
    Swap<int>(a, b);
    cout << a << "-" << b << endl;
    cout << c << "-" << d << endl;
    Swap<float>(c, d);
    cout << c << "-" << d << endl;
    cout << e << "-" << f << endl;
    Swap<char>(e, f);
    cout << e << "-" << f << endl;

    return 0; 
}