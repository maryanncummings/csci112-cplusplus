#include <iostream>
using namespace std;

// uses a reference type
// a and b are references to integers
void swapnum(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

// passes by value
void swapnum1(int a, int b) {

    int temp = a;
    a = b;
    b = temp;
    return;
}

int main(void) {
    int m = 1,
        n = 2;

    swapnum(m,n);

    cout << "m is " << m << " n is " << n << endl;

    swapnum1(m,n);
    cout << "m is " << m << " n is " << n << endl; 
    return(0);
}
