#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int sum;

    cout << "Please enter the value of the a:\n";
    cin >> a; // read number from console and store it in a.

    cout << "Please enter the value of the b:\n";
    cin >> b; // read number from console and store it in b.

    sum = a + b;
    cout << "The sum of a and b is:" << sum << endl;
    return 0;
}