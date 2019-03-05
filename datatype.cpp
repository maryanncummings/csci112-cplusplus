#include <iostream>
using namespace std;

// shows how to use {} and ='s for setting a variable
int main(void) {
    double d1 = 2.3;
    double d2 = 4.5;

    // this one truncates
    int i1 = 7.8;
    // gives error - better to use this method
    // int i2 {8.9};

    auto havei2 = false;

    cout << "d1 is " << d1 << " d2 is " << d2 << endl;
    if (!havei2) {
        cout << "i1 is " << i1 << endl;
    }

    return(0);
}


