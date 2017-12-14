#include <iostream>

using namespace std;

void passByValue(int x);

void passByReference(int &x);

void passByAddress(int *x);

void printArray(int *array, int length);

int main() {

    int betty = 60;
    int sandy = 65;
    int lanty = 70;
    int array[6] = {1, 2, 3, 4, 5, 6};

    passByValue(betty);     // Pass by value
    passByReference(sandy); // Pass by reference
    passByAddress(&lanty);  // Pass by address

    cout << "betty=" << betty << endl;
    cout << "sandy=" << sandy << endl;
    cout << "lanty=" << lanty << endl;

    // print array, Pass by address
    printArray(array, 6);

    return 0;
}

void passByValue(int x) {
    x = 10;
}

void passByReference(int &x) {
    x = 15;
}

void passByAddress(int *x) {
    *x = 20;
}

void printArray(int *array, int length) {
    for (int i = 0; i < length; ++i) {
        cout << array[i] << endl;
    }
}

