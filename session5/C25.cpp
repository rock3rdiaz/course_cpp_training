// session 5, class 25. Overloading << (left bit shift) operator

#include <iostream>

using namespace std;

class Test {

private:
	int id;
	string name;

public:
	Test(int i, string n) : id(i), name(n) {}
	inline int getId() const { return id; }
	inline string getName() const { return name; }
	/*ostream &operator<<(ostream &ostream) {
		cout << "------------- operator<< inside class without fiend method" << end;
		return ostream << "id: " << this->getId() << ", name: " << this->getName();
	}*/
	friend ostream &operator<<(ostream &ostream, const Test &test) {
		cout << "-------------- operator<< inside class with fiend method" << endl;
		return ostream << "id: " << test.id << ", name: " << test.name;
	}

};

int main() {

	Test t1 = Test(12, "rocker");

	//t1 << cout << endl;	

	cout << endl;

	cout << t1 << endl;	
	
	return 0;
}
