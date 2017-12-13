#include <iostream>

using namespace std;

void printArray(int numRows, int numCols, int array[numRows][numCols]);

int main() {

    int array0[3][5] = {
            {1,  2,  3,  4,  5},
            {6,  7,  8,  9,  10},
            {11, 12, 13, 14, 15}
    };

    cout << "array0[3][5]=" << array0[3][5] << endl;

    int array1[3][5] = {
            {1,  2},
            {6,  7,  8},
            {11, 12, 13, 14}
    };
    cout << "array1[3][5]=" << array1[3][5] << endl;

    int array2[][5] = {
            {1,  2,  3,  4,  5},
            {6,  7,  8,  9,  10},
            {11, 12, 13, 14, 15}
    };
    cout << "array2[3][5]=" << array2[3][5] << endl;

    const int numRows = 10;
    const int numCols = 10;
    int array3[numRows][numCols] = {0};

    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            array3[row][col] = row * col;
        }
    }

    for (int row = 1; row < numRows; ++row) {
        for (int col = 1; col < numCols; ++col) {
            cout << array3[row][col] << '\t';
        }
        cout << '\n';
    }
    return 0;
}