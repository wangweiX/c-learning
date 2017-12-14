//
// Created by wangwei on 14/12/2017.
//

#include <iostream>
#include "Simple.h"

using namespace std;

Simple::Simple(int nID) {
    cout << "Constructing Simple " << nID << '\n';
    m_nID = nID;
}

Simple::~Simple() {
    cout << "Destructing Simple " << m_nID << '\n';
}

int Simple::getID() {
    return m_nID;
}
