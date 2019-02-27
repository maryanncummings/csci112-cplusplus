#include <iostream>
using namespace std;

// print out 8 rows of alternating stars

int main(void) {
	for (int j = 1; j <= 8; ++j) {
        if (j%2 == 0) {
  		    cout << " ";  
	    }
        for (int i = 1; i <= 8; ++i) {	
	       cout << "* ";
	    }    
	    cout << '\n';
	}
	return(0);
}
