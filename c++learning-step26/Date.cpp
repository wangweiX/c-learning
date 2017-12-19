//
// Created by wangwei on 18/12/2017.
//

#include "Date.h"

Date::Date() {

}

Date::Date(int year, int month, int day) {
    setDate(year, month, day);
}

void Date::setDate(int year, int month, int day) {
    setM_year(year);
    setM_month(month);
    setM_day(day);
}

int Date::getM_year() const {
    return m_year;
}

int Date::getM_month() {
    return m_month;
}

int Date::getM_day() {
    return m_day;
}

void Date::setM_year(int m_year) {
    Date::m_year = m_year;
}

void Date::resetM_year(int m_year) const {
//    Date::m_year = m_year; // compile error, const functions can't change member variables.
}

void Date::setM_month(int m_month) {
    Date::m_month = m_month;
}

void Date::setM_day(int m_day) {
    Date::m_day = m_day;
}

// Const references
void Date::printDate(const Date &date) {
//    std::cout << date.getM_year() << "/" << date.getM_month() << "/" << date.getM_day();
//    we can’t call non-const member functions on const objects, this will cause a compile error.
}
