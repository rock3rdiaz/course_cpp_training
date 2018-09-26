// session 2, class 3. Exceptions


#include <iostream>
using namespace std;

void posibleError() {
	bool error1 = false;
	bool error2 = false;
	bool error3 = true;
	if(error1) {
		throw 8;
	}	
	if(error2) {
		throw "char error";	
	}
	if(error3) {
		throw string("string error");	
	}
}

void externalError() {
	posibleError();
}

int main() {
	try {
		externalError();
	} catch(int e) {
		cout << "int error: " << e << endl;
	} catch(char const *e) {
		cout << "char error: " << e << endl;
	} catch(string &e) {
		cout << "string error: " << e << endl;
	}
	
	return 0;
}
