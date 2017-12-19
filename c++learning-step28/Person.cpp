//
// Created by wangwei on 19/12/2017.
//

#include "Person.h"

using namespace std;

Person::Person(const string &name, const Birthday &birthday)
        : name(name), birthday(birthday) {

}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const Birthday &Person::getBirthday() const {
    return birthday;
}

void Person::setBirthday(const Birthday &birthday) {
    Person::birthday = birthday;
}

void Person::printInfo() {
    cout << "My name is " << getName() << " and I was born on";
    birthday.printBirthDayStr();
}
