#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<int> v {1,2,3,4,5,6};

    try {

        for (int i = 0; i <= 6 ; ++i) {
            // using v[] will not check for out of range, but at() does
            v.at(i) = 7;
        }
    }
    catch (out_of_range& err) {
        cerr << "Out of Range" << endl;
    }
    return(0);
}
