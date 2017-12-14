#include <iostream>

using namespace std;

int main() {

    int array[6] = {1, 2, 3, 4, 5, 6};
    int *bg0 = &array[0];
    int *bg1 = &array[1];
    int *bg2 = &array[2];
    int *bg3 = &array[3];
    int *bg4 = &array[4];
    int *bg5 = &array[5];

    cout << "bg0 address = " << bg0 << endl; // 0x7ffeed314620
    cout << "bg1 address = " << bg1 << endl; // 0x7ffeed314624
    cout << "bg2 address = " << bg2 << endl; // 0x7ffeed314628
    cout << "bg3 address = " << bg3 << endl; // 0x7ffeed31462c
    cout << "bg4 address = " << bg4 << endl; // 0x7ffeed314630
    cout << "bg5 address = " << bg5 << endl; // 0x7ffeed314624

    bg0 += 1; // working math and pointers , we are not changing the memory address, we are changing the element that appoint to.
    cout << "after add 1 , bg0 address = " << bg0 << endl; // 0x7ffeed314624

    return 0;
}