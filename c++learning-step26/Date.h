//
// Created by wangwei on 18/12/2017.
//

#ifndef C_LEARNING_STEP26_DATE_H
#define C_LEARNING_STEP26_DATE_H


class Date {
private:
    int m_year;
    int m_month;
    int m_day;

public:

    Date();

    Date(int year, int month, int day);

    int getM_year() const;

    int getM_month();

    int getM_day();

    void setM_year(int m_year);

    void resetM_year(int m_year) const;

    void setM_month(int m_month);

    void setM_day(int m_day);

    void setDate(int year, int month, int day);

    void printDate(const Date &date);
};


#endif //C_LEARNING_STEP26_DATE_H
