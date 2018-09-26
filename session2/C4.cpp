// sesion 2, class 4. Exceptions


#include <iostream>
using namespace std;

class Test {
	public:
		Test() {
			char *pMemory = new char[99999999999999999];
		        delete[] pMemory;	
		}
};

int main() {
	try {
		Test t;
	} catch(bad_alloc &e) {
		cout << "exception " << e.what() << endl;
	}

	cout << "still running" << endl;

	return 0;
}
