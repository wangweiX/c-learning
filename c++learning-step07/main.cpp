#include <iostream>
#include "add.h"
#include "Date2.h"

using namespace std;

int main() {
    cout << "The sum of 3 and 4 is " << add(3, 4) << endl;
    Date2 date2(2017, 12, 8);
    cout << "Today is year=" << date2.getYear()
         << " month=" << date2.getMonth()
         << " day=" << date2.getDay()
         << endl;
    return 0;
}