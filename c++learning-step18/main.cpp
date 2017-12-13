#include <iostream>

using namespace std;

int main() {

    int array1[9];
    for (int i = 0; i < 9; ++i) {
        array1[i] = i + 10;
    }

    // array length = array size / element size.
    // sizeof(array) is the array size, and sizeof(array[0]) is the element size

    // “length”: the number of elements in the array,
    // “size”  : how large something is in bytes.
    cout << "The size of array1 is " << sizeof(array1) << endl;
    cout << "The length of array1 is " << sizeof(array1) / sizeof(array1[0]) << endl;

    int array2[6] = {18, 76, 65, 42, 12, 41};
    int array2Sum = 0;

    // calculation array2 element sum
    for (int j = 0; j < sizeof(array2) / sizeof(array2[0]); ++j) {
        array2Sum += array2[j];
    }

    cout << "The size of array2 is " << sizeof(array2) << endl;
    cout << "The length of array2 is " << sizeof(array2) / sizeof(array2[0]) << endl;

    cout << "array2 has " << sizeof(array2) / sizeof(array2[0]) << " elements. they are "
         << array2[0] << ", " << array2[1] << ", " << array2[2] << ", "
         << array2[3] << ", " << array2[4] << ", " << array2[5] << endl;

    cout << "array2Sum=" << array2Sum << endl;

    return 0;
}