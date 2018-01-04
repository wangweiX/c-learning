//
// Created by wangwei on 26/12/2017.
//

#ifndef C_LEARNING_STEP29_TEMPERATURE_H
#define C_LEARNING_STEP29_TEMPERATURE_H


#include "Humidity.h"

class Humidity; // forward declaration for class Humidity

class Temperature {
private:
    int m_temp;
public:
    Temperature(int temp = 0);

    friend void printWeather(const Temperature &temperature, const Humidity &humidity);

};


#endif //C_LEARNING_STEP29_TEMPERATURE_H
