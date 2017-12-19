#include <iostream>
#include "Birthday.h"
#include "Person.h"

int main() {

    Birthday birthday(1991, 12, 18);

    Person person("wangwei", birthday);

    person.printInfo();

    return 0;
}