//
// Created by wangwei on 19/12/2017.
//

#include "Birthday.h"

using namespace std;

Birthday::Birthday(int year, int month, int day) : year(year), month(month), day(day) {}

int Birthday::getYear() const {
    return year;
}

void Birthday::setYear(int year) {
    Birthday::year = year;
}

int Birthday::getMonth() const {
    return month;
}

void Birthday::setMonth(int month) {
    Birthday::month = month;
}

int Birthday::getDay() const {
    return day;
}

void Birthday::setDay(int day) {
    Birthday::day = day;
}

void Birthday::printBirthDayStr() {
    cout << "year=" << getYear() << ",month=" << getMonth() << ",day=" << getDay() << endl;
}
