#include <iostream>
#include "Date.h"

using namespace std;

class Something;

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

    Date date2{2017, 12, 19};
    cout << "date1.year=" << date1.getM_year()
         << "date1.mouth" << date2.getM_month()
         << "date1.day" << date2.getM_day()
         << endl;

    Something something("wangwei");
    cout << "m_value=" << something.getM_value() << endl;

    const Something something1("wangwei1");
    cout << "m_value=" << something1.getM_value() << endl;

    return 0;
}


class Something {
private:
    string m_value;

public:
    Something(const string &value = "") {
        m_value = value;
    }

    const string &getM_value() const {
        return m_value;// getValue() for const objects
    }

    string &getM_value() {
        return m_value;// getValue() for non-const objects
    }
};