
#include "Sally.h"

int main() {

    Sally sally;
    sally.printCrap();

    Sally &sally1 = sally;
    sally1.printCrap(); // Member selection using reference to class

    Sally *sallyPointer = &sally;
    sallyPointer->printCrap(); // Member selection using pointer to class

    return 0;
}