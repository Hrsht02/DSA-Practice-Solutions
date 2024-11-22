#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initialize a vector with 4 elements
    vector<int> vec = {1, 2, 3, 4};

    // Print the current size and capacity of the vector
    cout << "size: " << vec.size() << "\n";
    cout << "capacity: " << vec.capacity() << "\n";

    // Add an additional element to the vector
    vec.push_back(5);

    // Print the updated size and capacity of the vector
    cout << "size: " << vec.size() << "\n";
    cout << "capacity: " << vec.capacity() << "\n";

    return 0;
}
