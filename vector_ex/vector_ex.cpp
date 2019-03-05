#include <iostream>
using namespace std;
#include <vector>

int main(void) {
    vector<double> temps;

    double temp;
    
    cout << "Enter temperatures (one per line) and hit ctrl-d when done\n";

    while (cin >> temp) {
        temps.push_back(temp);
    }

    double sum = 0.0;
    for (unsigned int i = 0; i < temps.size(); ++i) {
        sum += temps[i];
    }

    cout << "Average Temperature is " << sum/temps.size() << '\n';

    return(0);
}
