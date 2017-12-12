#include <iostream>

using namespace std;

int var = 15;

void doNothing() {
    cout << "doNothing, var=" << var << endl;
}

int main() {
    int var = 16;
    cout << "main, var=" << ::var << endl; // :: use global var
    doNothing();
    return 0;
}