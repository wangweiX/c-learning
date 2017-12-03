#include <iostream>

using namespace std;

int main() {
    int age = 180;
    if (age < 18) {
        cout << "Now, you will be adult !" << endl;
    } else if (age < 30) {
        cout << "You will be thirty years old" << endl;
    } else if (age < 50) {
        cout << "You will be fifty years old" << endl;
    } else if (age < 100) {
        cout << "You will be hundred years old" << endl;
    } else {
        cout << "Wa! Are you still alive ? !!!" << endl;
    }
    return 0;
}
