//
// Created by wangwei on 26/12/2017.
//

#ifndef C_LEARNING_STEP29_STORAGE_H
#define C_LEARNING_STEP29_STORAGE_H


class Storage {
private:
    int m_nValue;
    double m_dValue;
public:
    Storage(int nValue, double dValue);

    friend class Display;
};


#endif //C_LEARNING_STEP29_STORAGE_H
