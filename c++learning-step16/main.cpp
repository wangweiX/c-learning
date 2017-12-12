#include <iostream>

using namespace std;

void printNumber(int x);

void printNumber(float x);

int main() {
    int a = 54;
    float b = 34.53;

    printNumber(a);
    printNumber(b);

    return 0;
}

void printNumber(int x) {
    cout << "print an int number x=" << x << endl;
}

void printNumber(float x) {
    cout << "print a float number x=" << x << endl;
}