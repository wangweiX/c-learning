//
// Created by wangwei on 26/12/2017.
//

#include "Accumulator.h"

Accumulator::Accumulator() {
    m_value = 5;
}

Accumulator::Accumulator(int m_value) : m_value(m_value) {

}

void Accumulator::add(int value) {
    m_value += value;
}





