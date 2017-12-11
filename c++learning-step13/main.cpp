#include <iostream>

using namespace std;

int main() {

    srand(time(NULL));
    // srand() sets the seed which is used by rand to generate "random" numbers (in quotes because they're generally pseudo-random).
    // If you don't call srand before your first call to rand, it's as if you had called srand(1) to set the seed to one.

    for (int i = 0; i < 100; ++i) {
        cout << "i=" << i << " rand number=" << rand() % 31 << endl;
    }
    return 0;
}