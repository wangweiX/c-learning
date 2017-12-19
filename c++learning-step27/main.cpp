#include <iostream>
#include "Something.h"

using namespace std;

int main() {

    Something something(10, 34.6, 'w', "wangwei");

    cout << "m_value1" << something.getM_value1() << endl;
    cout << "m_value2" << something.getM_value2() << endl;
    cout << "m_value3" << something.getM_value3() << endl;
    cout << "m_value4" << something.getM_value4() << endl;

    return 0;
};