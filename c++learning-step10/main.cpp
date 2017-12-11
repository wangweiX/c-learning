#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a;
    float p = 4000;
    float r = 0.3;

    for (int day = 1; day <= 3; day++) {
        a = p * pow(1 + r, day);
        cout << "day=" << day << ", a=" << a << endl;
    }
    return 0;
}