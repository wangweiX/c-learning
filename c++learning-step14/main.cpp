#include <iostream>

using namespace std;

int volume(int l = 5, int w = 6, int h = 7);

int main() {
    int v1 = volume();
    cout << "v1=" << v1 << endl;

    int v2 = volume(1);
    cout << "v2=" << v2 << endl;

    int v3 = volume(1, 1);
    cout << "v3=" << v3 << endl;

    int v4 = volume(1, 1, 1);
    cout << "v4=" << v4 << endl;
    return 0;
}

int volume(int l, int w, int h) {
    return l * w * h;
}