// session 5, class 28. Overloading equality

#include <iostream>
#include "Complex.h"

using namespace std;
using namespace rock3r;

int main() {
	Complex c1(12, 9);
	Complex c2(12, 9);

	if(c1 == c2) {
		cout << "objects are equals" << endl;
	} else {
		cout << "objects are not equals" << endl;
	}

	return 0;	
}
