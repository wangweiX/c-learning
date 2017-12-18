#include <iostream>
#include "Sally.h"
#include "Date.h"

using namespace std;

int main() {

    const int x(5);
//    x = 5; compile error
//    const int y; compile error
    cout << "x=" << x << endl;

    const Date date;// initialize using default constructor
    const Date date1(2017, 12, 18); // initialize using parameterized constructor

//    date1.setM_month(11); // compile error
//    date1.getM_day(); // compile error

    cout << "date1.year=" << date1.getM_year() << endl;


    Sally sally;

    sally.setAge(10);
    cout << "sally age=" << sally.getAge() << endl;

    sally.printStr();
    sally.printStr0();

    const Sally sallyConstObj; // const object
    sallyConstObj.printStr();
//    sallyConstObj.printStr0(); compile error

    return 0;
}