#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> temp; //declaration of array
    int s_temp = temp.size(); //gives size of vector
    temp.push_back(69); //adding elements to vector
    temp.push_back(12);
    temp.pop_back(); //removes the last element from the vector
    temp.push_back(5); 
    temp.push_back(9);
    temp.push_back(2);
    temp.push_back(12);
    temp.push_back(1);
    sort(temp.begin(),temp.end()); //will sort all the elements in the vector - needs algorithm header file
    
    int a;
    for (int i = 0; i < 3; i++) {
        cin >> a;
        temp.push_back(a);
    }   

    for (int i = 0; i < temp.size(); i++) {
        cout << "Element at index: "<<i<<" is :"<<temp[i]<<endl;
    }
    return 0;
}