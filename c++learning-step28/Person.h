//
// Created by wangwei on 19/12/2017.
//

#ifndef C_LEARNING_STEP28_PERSON_H
#define C_LEARNING_STEP28_PERSON_H

#include <iostream>
#include "Birthday.h"

using namespace std;

class Person {

private:
    string name;
    Birthday birthday;

public:

    Person(const string &name, const Birthday &birthday);

    const string &getName() const;

    void setName(const string &name);

    const Birthday &getBirthday() const;

    void setBirthday(const Birthday &birthday);

    void printInfo();

};


#endif //C_LEARNING_STEP28_PERSON_H
