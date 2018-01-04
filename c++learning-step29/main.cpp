#include <iostream>
#include "Accumulator.h"
#include "Temperature.h"
#include "Storage.h"
#include "Display.h"

using namespace std;

void rest(Accumulator &accumulator) {
    accumulator.m_value = 0;
    cout << "rest Accumulator m_value to zero. " << endl;
}

bool equals(const Accumulator &accumulator1, const Accumulator &accumulator2) {
    return accumulator1.m_value == accumulator2.m_value;
}

void printWeather(const Temperature &temperature, const Humidity &humidity) {
    cout << "The temperature is " << temperature.m_temp <<
         " and the humidity is " << humidity.m_humidity << '\n';
}

int main() {
    Accumulator accumulator;
    accumulator.add(5);
    rest(accumulator);

    Accumulator accumulator1(5);
    bool boolValue = equals(accumulator, accumulator1);
    cout << "boolValue=" << boolValue << endl;

    Temperature temperature(10);
    Humidity humidity(23);

    printWeather(temperature, humidity);

    Storage storage(5, 6.7);
    Display display(false);

    display.displayItem(storage);

    return 0;
}




