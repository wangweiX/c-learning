//
// Created by wangwei on 26/12/2017.
//

#ifndef C_LEARNING_STEP29_ACCUMULATOR_H
#define C_LEARNING_STEP29_ACCUMULATOR_H


class Accumulator {

private:
    int m_value;

public:
    Accumulator();

    Accumulator(int m_value);

    void add(int value);

    friend void rest(Accumulator &accumulator);

    friend bool equals(const Accumulator &accumulator1, const Accumulator &accumulator2);
};


#endif //C_LEARNING_STEP29_ACCUMULATOR_H
