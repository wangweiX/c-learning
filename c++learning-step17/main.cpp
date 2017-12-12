#include <iostream>

using namespace std;

int factorial(int number) {
    cout << "factorial.number=" << number << endl;
    if (number == 1) {
        return 1;
    }
    return number * factorial(number - 1);
}

int fibonacci(int number) {
//    cout << "fibonacci.number=" << number << endl;
    if (number == 0) {
        return 0;
    }
    if (number == 1) {
        return 1;
    }
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int sumTo(int number) {
    cout << "sumTo.number=" << number << endl;
    if (number < 0) {
        return 0;
    } else if (number == 1) {
        return 1;
    } else {
        return number + sumTo(number - 1);
    }
}


int main() {

    cout << "factorial(25) >>>>" << factorial(25) << endl;

    for (int i = 0; i < 13; i++) {
        cout << fibonacci(i) << endl;
    }

    cout << sumTo(100) << endl;

    return 0;
}

