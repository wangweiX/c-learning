//
// Created by wangwei on 26/12/2017.
//

#ifndef C_LEARNING_STEP29_HUMIDITY_H
#define C_LEARNING_STEP29_HUMIDITY_H


#include "Temperature.h"

class Temperature; // forward declaration for class Temperature

class Humidity {
private:
    int m_humidity;

public:
    Humidity(int humidity = 0);

    friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};


#endif //C_LEARNING_STEP29_HUMIDITY_H
