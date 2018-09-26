// sesion 4, class 13. Vector and memory
// the capacity always doubles

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> numbers(0);

	cout << "numbers size: " << numbers.size() << endl;
	cout << "numbers capacity: " << numbers.capacity() << endl;

	for(int i = 0; i < 10000; i++) {
		numbers.push_back(i);
	}

	numbers.reserve(100000000);
	cout << "number 2: " << numbers[2] << endl;
	cout << "numbers size: " << numbers.size() << endl;
	cout << "numbers capacity: " << numbers.capacity() << endl;

	return 0;
}
