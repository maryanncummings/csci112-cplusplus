#include <iostream>
#include "time.H"
using namespace std;

int main(void) {
    Time t;

    cout << "The initial military time is ";
    t.printMilitary();
    cout << endl;
    cout << "The initial standard time is ";
    t.printStandard();
    cout << endl;

    // t.hour = 15;

    t.setTime(15, 30, 'm');
    cout << "New military time is ";
    t.printMilitary();
    cout << endl;
    cout << "New standard time is ";
    t.printStandard();
    cout << endl;
}

