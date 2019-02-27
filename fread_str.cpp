#include <iostream>
#include <fstream>
using namespace std;

int main(void) {

    string line;

    ifstream inpf;
    inpf.open("out.txt");
    if (inpf.is_open()) {
        while(!inpf.eof()) {
            inpf >> line;
            cout << "line is  " << line << '\n';
        }
    }
    inpf.close();
    return 0;
}
