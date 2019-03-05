#include <iostream>
using namespace std;

namespace One {
double func() {
    return 15.0;
}
}

namespace Two {
double func() {
    return 2.3; 
}
}

int main(void) {

    cout << "Value is " << One::func() << endl;

    cout << "otherwise " << Two::func() << endl;

    return(0);
}

