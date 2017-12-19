//
// Created by wangwei on 19/12/2017.
//

#include "Something.h"

Something::Something(int m_value1, double m_value2, char m_value3, const string &m_value4)
        : m_value1(m_value1),
          m_value2(m_value2),
          m_value3(m_value3),
          m_value4(m_value4) {
    // No need for assignment here
}


Something::Something() {

}

int Something::getM_value1() const {
    return Something::m_value1;
}

double Something::getM_value2() const {
    return Something::m_value2;
}

char Something::getM_value3() const {
    return Something::m_value3;
}

const string &Something::getM_value4() const {
    return Something::m_value4;
}

void Something::setM_value1(int m_value1) {
    Something::m_value1 = m_value1;
}

void Something::setM_value2(double m_value2) {
    Something::m_value2 = m_value2;
}

void Something::setM_value3(char m_value3) {
    Something::m_value3 = m_value3;
}
