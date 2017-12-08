//
// Created by wangwei on 08/12/2017.
//

#include "Date2.h"

Date2::Date2(int year, int month, int day) {
    setDate(year, month, day);
}

void Date2::setDate(int year, int month, int day) {
    m_year = year;
    m_month = month;
    m_day = day;
}