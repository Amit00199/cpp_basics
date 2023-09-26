#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int user_age;
    cout << "Enter your age \n";
    cin >> user_age;

//if, else, else if- conditions

    if (user_age >= 18) { //code will be run if the condition is true
        cout << "You are officially an adult." << endl;
    }

    else if ((user_age >= 15) && (user_age <= 17)) { //used to add intermeidate conditions- multiple else ifs can be added
        cout << "You are going to be an adult soon." << endl;
    }

    else { //only executed if the 'if' condition is false
        cout << "You are too young for this" << endl;
    }

    cout << "--------------------------------" << endl;

//if only one condition/statement is to be executed the conditional operator(ternary operator) can be used instead
//syntax:
//variable = (condition) ? expressionTrue : expressionFalse;

    string result = (user_age < 18) ? "Can't vote" : "Eligible to vote";
    cout << result << endl;

//switch statement is used to select one of many code blocks to be executed- can be used as a substitute for if..else and vice-versa

    int day = 5;
    
    switch (day) {
        case 1:
        cout << "Monday\n";
        break; //breaks out of the switch block so all the codes arent executed

        case 2:
        cout << "Tuesday\n";
        break;

        case 3:
        cout << "Wednesday\n";
        break;

        case 4:
        cout << "Thursday\n";
        break;

        case 5:
        cout << "Friday\n";
        break;

        case 6:
        cout << "Saturday\n";
        break;

        default: //this sets a standard code, is executed if none of the other cases are executed
        cout << "Sunday\n";
    }

//goto statement is used for altering the normal sequence of program execution by transferring control to some other part of the program
//generally avoided as it makes the code complex and tangled - considered a harmful construct and bad programming practices

    float num, avg, sum;
    int i, n;

    cout << "Maximum number of inputs\n";
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << "Enter n" << i << " : ";
        cin >> num;

        if (num < 0.0) {
            goto jump;
        }
        sum += num;
    }

    jump: 
        avg = sum / (i - 1);
        cout << "Average: " << avg;

    return 0;
}