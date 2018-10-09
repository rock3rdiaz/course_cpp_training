// session 8, class 40. Auto key word

#include <iostream>
using namespace std;

template <typename T> 
auto test(T value) -> decltype(value) {
	return value;
};

int main(){

	cout << test(4) << endl;
	cout << test("4") << endl;
	return 0;
}
