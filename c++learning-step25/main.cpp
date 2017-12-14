#include <iostream>
#include "IntArray.h"
#include "Simple.h"

using namespace std;

int main() {

    IntArray intArray(10);
    for (int i = 0; i < intArray.getLength(); ++i) {
        intArray.setValue(i, i + 1);
    }

//    exit(0);

    cout << "The value of element 5 is: " << intArray.getValue(5) << "\n";

    // -------------------------------------------------

    Simple simple(4);
    cout << "simple Id=" << simple.getID() << "\n";

    Simple *pSimple = new Simple(3);
    cout << "pSimple Id=" << pSimple->getID() << "\n";
    delete pSimple;

    return 0;
} // intArray is destroyed here, so the ~IntArray() destructor function is called here