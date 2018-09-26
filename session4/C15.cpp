// sesion 4, class 15. List

#include <iostream>
#include <list>

using namespace std;

int main() {

	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_front(0);

	list<int>::iterator it = numbers.begin();
	it++; // is not a index, is a pointer to element inside list

	numbers.insert(it, 99);// insert elements

	for(list<int>::iterator _it = numbers.begin(); _it != numbers.end(); _it++) {
		cout << "for 1 element: " << *_it << endl; 
	} 

	cout << endl;

	it = numbers.erase(it);// erase elements. erase() method invalidate a iterator reference.

	for(list<int>::iterator _it = numbers.begin(); _it != numbers.end(); _it++) {
		cout << "for 2 element: " << *_it << endl; 
	} 

	return 0;
}
