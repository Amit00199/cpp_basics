#include <iostream>

using namespace std;

struct Person //defining a structure
{                   //use curly brackets to define members - declare variables of the structure inside brackets
    string name;
    int age;
    float salary;
}; //semicolon needed here

Person get_data(Person);
void display_data (Person);

int main() {

    Person bill; //to define a structure variable - this makes the compiler allocate memory to the variable
    bill.age = 35; //to access members of the structure
    cout << "Bill's age is: " << bill.age << endl;

    Person p;
    p = get_data(p);
    display_data(p); 

    return 0;
}

Person get_data(Person p) {
    cout << "\nEnter full name: ";
    getline(cin, p.name);
    cout << "\nEnter age: ";
    cin >> p.age;
    cout << "\nEnter salary: ";
    cin >> p.salary;

    return p;
}

void display_data (Person p) {
    cout << "\n\t Displaying Information\n";
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
}