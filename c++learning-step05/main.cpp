#include <iostream>

using namespace std;

// int means the function returns an integer value to the caller
int add(int x, int y) {
    return x + y;
}

// forward declaration of add() (using a function prototype)
// function prototype includes return type, name, parameters, and semicolon.  No function body!
int sub(int x, int y);

// Definition of function doPrintSth()
void doPrintSth() {
    cout << "This function return nothing" << endl;
}

// Definition of function main()
int main() {
    int a = 100;
    int b = 50;

    int sumResult = add(a, b);
    cout << "a + b = " << sumResult << endl;

    int subResult = sub(a, b);
    cout << "a - b = " << subResult << endl;

    // Interrupt main() by making a function call to doPrintSth().  main() is the caller.
    cout << "start to execute doPrintSth()" << endl;
    doPrintSth();
    cout << "Finish to execute doPrintSth()" << endl;

    return 0;
}


int sub(int x, int y) {
    return x - y;
}
