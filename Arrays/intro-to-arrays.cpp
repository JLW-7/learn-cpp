#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // 1. Declare an array of size 5
    int a[5];  // contents are uninitialized (can be garbage values)

    // 2. Initialize an array with default values
    int a[5] = {};        // all values = 0
    int a[5] = {1, 2, 3}; // first 3 values set, rest = 0

    // 3. Declare and initialize an array fully
    int a[5] = {5, 4, 3, 2, 1};

    // 4. Access elements (indexing starts at 0)
    cout << a[0] << endl;  // prints 5
    cout << a[4] << endl;  // prints 1

    // 5. Modify elements
    a[2] = 100;            // set third element to 100
    cout << a[2] << endl;  // prints 100

    // 6. Loop through an array
    // Index based
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    
    // Range based
    for (const auto& i : a) cout << i << " ";

    // Read in an array
    int maxsize = 100;
    int b[maxsize];
    for (int i = 0; i < maxsize; i++) {
        cin >> b[i];
    }

    // 7. Note: arrays in C++ are fixed in size. 
    // You cannot push_back like vectors. You also cannot declare variable length arrays. If you need that, use std::vector.
}
