#include <iostream>
using namespace std;

void change(int* a) {
    *a = *a + 5;
    return;
}

int main(void) {
    int m = 6;
    int *p = &m;

    cout << "m is " << m << endl;

    change(p);

    cout << "m is " << m << " *p is " << *p << endl;

    return(0);
}
    
