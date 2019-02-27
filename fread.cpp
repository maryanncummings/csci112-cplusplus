#include <iostream>
#include <fstream>
using namespace std;

int main(void) {

    int num;

    ifstream inpf;
    inpf.open("out.txt");
    if (inpf.is_open()) {
        while(!inpf.eof()) {
            inpf >> num;
            cout << "int is  " << num << '\n';
        }
    }
    inpf.close();
    return 0;
}
