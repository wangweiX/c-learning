//
// Created by wangwei on 26/12/2017.
//

#include <iostream>
#include "Display.h"

Display::Display(bool m_displayIntFirst) : m_displayIntFirst(m_displayIntFirst) {}

void Display::displayItem(Storage &storage) {
    if (m_displayIntFirst)
        std::cout << storage.m_nValue << " " << storage.m_dValue << '\n';
    else
        std::cout << storage.m_dValue << " " << storage.m_nValue << '\n';
}

