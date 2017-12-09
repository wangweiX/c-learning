#include <iostream>

using namespace std;

int main() {
    int x = 10;
    x += 3;
    cout << "operate +=,  x value is " << x << endl; // Addition
    x -= 3;
    cout << "operate -=,  x value is " << x << endl; // Subtraction
    x *= 3;
    cout << "operate *=,  x value is " << x << endl; // Multiplication
    x /= 3;
    cout << "operate /=,  x value is " << x << endl; // Division
    x %= 3;
    cout << "operate %=,  x value is " << x << endl; // Modulus
    x ^= 3;
    cout << "operate ^=,  x value is " << x << endl; // Bitwise XOR
    x &= 3;
    cout << "operate &=,  x value is " << x << endl; // Bitwise AND
    x |= 3;
    cout << "operate |=,  x value is " << x << endl; // Bitwise OR

    return 0;
}