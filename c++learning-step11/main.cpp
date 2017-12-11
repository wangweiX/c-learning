#include <iostream>
using namespace std;

int main() {
    int age  = 18;

    switch(age){
        case 16:
            cout << "Hey you can drive now !" << endl;
            break;
         case 18:
            cout << "go buy some lotto tickets ~" << endl;
            break;
         case 21:
            cout <<  "buy me some beer" << endl;
            break;
         default:
            cout << "sorry you get nothign" << endl;
    }
    return 0;
}