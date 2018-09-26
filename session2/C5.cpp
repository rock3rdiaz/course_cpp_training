// session 2, class 5. Exceptions
#include <iostream>
using namespace std;

class MyException : exception {
	public:
		virtual const char* what() const throw() {
			return "something bad happened!";
		}
};

class Test {
	public:
		void makeSomething() {
			throw MyException();
		}

};

int main() {
	Test t;
	try {
		t.makeSomething();
	} catch(MyException &e){
		cout << "exception " << e.what() << endl;
	}

	cout << "still running" << endl;

	return 0;
}
