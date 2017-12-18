//
// Created by wangwei on 17/12/2017.
//

#include <iostream>
#include "Sally.h"

Sally::Sally() {
    std::cout << "I am sally constructor" << std::endl;
}

Sally::Sally(int age) {
    this->age = age;
}

int Sally::getAge() {
    return age;
}

void Sally::setAge(int age) {
    Sally::age = age;
}

void Sally::printStr0() {
    std::cout << "I am regular function" << std::endl;
}

void Sally::printStr() const {
    std::cout << "I am const function" << std::endl;
}
