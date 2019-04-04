#include <iostream>
#include "time.H"
using namespace std;

Time::Time() {
    hour = minute = 0;  // memberwise copy
    zone = '0';
}

void Time::setTime(int h, int m, char z) {
    if (h < 0 || h > 12) {
        cout << "ERROR: bad hour " <<  h << endl;
    } 
    else {
        hour = h;
    }
    if (m < 0 || m > 59) {
        cout << "ERROR: bad minute " <<  m << endl;
    }
    else {
        minute = m;
    }
    if (zone != 'e' && zone != 'm' && zone != 'p' && zone != 'c') {
       cout << "ERROR: bad zone " << z << endl;
    }
    else {
        zone = z;
    }
}

void Time::printMilitary() {
    cout << (hour < 10 ? "0" : "") << hour;
    cout << (minute < 10 ? "0" : "") << minute;
}

void Time::printStandard() {
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
        << ":" << (minute < 10 ? "0" : "") << minute
        << (hour < 12 ? "AM" : "PM");
}

