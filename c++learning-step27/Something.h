//
// Created by wangwei on 19/12/2017.
//

#ifndef C_LEARNING_STEP27_SOMETHING_H
#define C_LEARNING_STEP27_SOMETHING_H

#include <iostream>

using namespace std;

class Something {

private:
    int m_value1;
    double m_value2;
    char m_value3;
    const std::string m_value4;

public:
    Something();

    Something(int m_value1, double m_value2, char m_value3, const string &m_value4);

    int getM_value1() const;

    double getM_value2() const;

    char getM_value3() const;

    const string &getM_value4() const;

    void setM_value1(int m_value1);

    void setM_value2(double m_value2);

    void setM_value3(char m_value3);
};


#endif //C_LEARNING_STEP27_SOMETHING_H
