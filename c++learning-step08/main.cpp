#include <iostream>

using namespace std;

int main() {
    int count = 0;
    int num;
    int total = 0;

    // while
    while (count < 5) {
        cin >> num;
        total = total + num;
        ++count;
    }
    cout << "You total number is " << total << endl;

    // for
    for (int i = 0; i < 10; i++) {
        cout << "i=" << i << endl;
    }

    // do while
    int z = 0;
    do {
        z++;
        cout << "z=" << z << endl;
    } while (z < 10);

    return 0;
}