#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
    ofstream outf;
    outf.open("out.txt");
    for (int i = 0; i < 10; ++i) {
        outf << i << '\n';
    }
    outf.close();
    return 0;
}
