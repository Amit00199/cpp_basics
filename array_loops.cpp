#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector<double> temperature_list = {12.3, -13.5, 22.5, 27.9, -6.9};
    for (int i = 0; i < temperature_list.size(); i++) {
        double temperature = temperature_list.at(i); //local variable to make it more readable
        cout << temperature_list.at(i) << endl;
        if (temperature < 0.0) {
            cout << "It's freezing!" << endl;
        }
    }

    for (double temperature: temperature_list) { //local variable to go through each element of the vector
        cout << temperature << endl;
    }
    return 0;
}