// session 6 , class 31. Class template

#include <iostream>
using namespace std;

template<class T>
class Test {
private:
	T obj;
public:
	Test(T o) : obj(o) {}
	void print() {
		cout << "the obj is " << obj << endl;	
	}
};

int main(){
	Test<string> t("rocker");

	t.print();

	return 0;
}
