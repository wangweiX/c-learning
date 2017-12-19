//
// Created by wangwei on 19/12/2017.
//

#ifndef C_LEARNING_STEP28_BIRTHDAY_H
#define C_LEARNING_STEP28_BIRTHDAY_H

#include <iostream>

class Birthday {
private:
    int year;
    int month;
    int day;
public:

    Birthday(int year, int month, int day);

    int getYear() const;

    void setYear(int year);

    int getMonth() const;

    void setMonth(int month);

    int getDay() const;

    void setDay(int day);

    void printBirthDayStr();
};


#endif //C_LEARNING_STEP28_BIRTHDAY_H
