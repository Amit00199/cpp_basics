#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {


    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> temp; //declaration of array
    int s_temp = temp.size(); //gives size of vector
    temp.begin(); //returns the first element of the vector
    temp.front(); //returns a reference to the first element of the vector
    temp.end(); //returns the last element of the vector
    temp.back(); //returns a reference to the last element of the vector
    temp.rbegin(); //returns the first element from the back of the vector - reverse beginning
    temp.rend(); //returns the last element from the back of the vector - reverse ending
    temp.cbegin(); //returns a constant iterator - const begin
    temp.cend(); //returns a constant iterator - const end
    temp.crbegin(); //returns a constant iterator - const reverse beginning
    temp.crend(); //returns a constant iterator - const reverse ending
    temp.size(); //returns number of elements in vector
    temp.max_size(); //returns the max number of elements the vector can hold
    temp.capacity(); //returns the size of the storage space currently allocated to the vector expressed as number of elements
    temp.resize(20); //resizes the vector so it contains (n) elements
    temp.empty(); //returns whether the container is empty
    temp.shrink_to_fit(); //reduces capacity of the container to fit its size and destroys all elements beyond capacity
    temp.reserve(20); //requests that the vector capacity be atleast (n) elements
    temp.assign(1, 2); //assigns new value to the vector elements by replacing old ones - (m, n) - fill the vector with n, m times
    temp.push_back(69); //push the elements into a vector from the back
    temp.insert(temp.begin(), 19); //inserts new element before the element at the specified position
    temp.erase(temp.begin()); //remove elements from a container from the specified position or range
    temp.pop_back(); //removes the last element from the vector
    temp.clear(); //used to remove all elements from a vector
    temp.swap(arr); //swap the contents of one vector with another vector of same type, size can differ
    temp.emplace(temp.begin(), 2); //extends the container by inserting new elements at the position
    temp.emplace_back(30); //used to insert a new element at the end of the vector
    temp[3]; //returns a reference to the element at possition [i]
    temp.at(4); //returns a reference to the element at position (i)
    temp.data(); //returns a direct pointer to the memory array used internally by the vector to store its owned elements


    sort(temp.begin(),temp.end()); //will sort all the elements in the vector - needs algorithm header file
        
    int a;
    for (int i = 0; i < 3; i++) {
        cin >> a;
        temp.push_back(a);
    }   

    for (int i = 0; i < temp.size(); i++) {
        cout << "Element at index: "<<i+1<<" is :"<<temp[i]<<endl;
    }
    return 0;
}