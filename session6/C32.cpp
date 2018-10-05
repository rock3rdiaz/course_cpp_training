// session 6 , class 32. Template functions

#include <iostream>
using namespace std;

template<typename T>
void print(T t) {
	cout << t << endl;
};

int main(){
	print<string>("rocker");
	print<int>(13);
	print("auto type"); // se infiere el tipo

	return 0;
}
