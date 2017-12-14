//
// Created by wangwei on 14/12/2017.
//

#include <assert.h>
#include "IntArray.h"

// constructor
IntArray::IntArray(int length) {
    assert(length > 0);

    m_array = new int[length];
    m_length = length;

}

// destructor
IntArray::~IntArray() {
    delete[] m_array;
}

void IntArray::setValue(int index, int value) {
    m_array[index] = value;
}

int IntArray::getValue(int index) {
    return m_array[index];
}

int IntArray::getLength() {
    return m_length;
}
