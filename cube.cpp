#include <iostream>
#include <cmath>
using namespace std;

// writes tables of first 10 integers and their cubes
int main(void) {
    cout << "Number\tCube\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << '\t' << pow((double)i, 3.0) << '\n';
    }
    return 0;
}