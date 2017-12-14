//
// Created by wangwei on 14/12/2017.
//

#ifndef C_LEARNING_STEP25_INTARRAY_H
#define C_LEARNING_STEP25_INTARRAY_H


class IntArray {
public:
    IntArray(int length);

    ~IntArray();

    void setValue(int index, int value);

    int getValue(int index);

    int getLength();

private:
    int *m_array;
    int m_length;
};


#endif //C_LEARNING_STEP25_INTARRAY_H
