#include <iostream>

using namespace std;

int main() {

    int age = 64;
    int money = 40434;

    if (age > 21 || money > 500) {
        cout << "you are allowed in!" << endl;
    }

    if (age < 100 && money > 500) {
        cout << "you are allowed in too !" << endl;
    }
    return 0;
}