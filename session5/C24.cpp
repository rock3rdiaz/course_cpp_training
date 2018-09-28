// session 5, class 24. Overloading assignment operator

#include <iostream>

using namespace std;

class Character {
private:
	string name;	
public:
	Character() : name("") {
		cout << "default constructor running" << flush;
		cout << endl;
	}
	
	Character(string n) : name(n) {
		cout << "custom constructor running" << flush;
		cout << endl;
	}
	
	Character(const Character &other) {
		name = other.name;
		cout << "copy constructor running" << flush;
		cout << endl;
	}
	
	const Character &operator=(const Character &other) {
		name = other.name;
		cout << "Assignment operator running" << flush;
		cout << endl;
		
		return *this;
		
	}
	
	~Character() {
		cout << "destructor running" << flush;
		cout << endl;
		
	}
	
	void print() {
		cout << "name: " << name << flush;
		cout << endl;
	}
};

int main() {
	Character c1 = Character("mario");
	c1.print();		
	
	cout << endl;
	
	Character c2 = c1;
	c2.print();
	
	cout << endl;
	
	Character c3 = Character();
	c3 = c1;
	c3.print();
	
	return 0;
}
