#include <iostream>

using namespace std;

int main() {

    int fish = 5;
    cout << fish << endl;  // print the value of variable fish
    cout << &fish << endl; // print the memory address of variable fish
    cout << *&fish << endl; // print the value at the memory address of variable fish

    // Declaring a pointer
    int *fishPointer;

    // Assigning a value to a pointer
    fishPointer = &fish; // a pointer to an integer value

    cout << *fishPointer << endl;
    cout << fishPointer << endl;

    return 0;
}