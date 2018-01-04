//
// Created by wangwei on 26/12/2017.
//

#ifndef C_LEARNING_STEP29_DISPLAY_H
#define C_LEARNING_STEP29_DISPLAY_H


#include "Storage.h"

class Display {
private:
    bool m_displayIntFirst;
public:
    Display(bool m_displayIntFirst);

    void displayItem(Storage &storage);
};


#endif //C_LEARNING_STEP29_DISPLAY_H
