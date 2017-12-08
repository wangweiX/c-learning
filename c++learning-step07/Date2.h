//
// Created by wangwei on 08/12/2017.
//

#ifndef C_LEARNING_STEP07_DATE2_H
#define C_LEARNING_STEP07_DATE2_H

class Date2 {
private:
    int m_year;
    int m_month;
    int m_day;

public:
    Date2(int year, int month, int day);

    void setDate(int year, int month, int day);

    int getYear() {
        return m_year;
    }

    int getMonth() {
        return m_month;
    }

    int getDay() {
        return m_day;
    }
};

#endif //C_LEARNING_STEP07_DATE2_H
