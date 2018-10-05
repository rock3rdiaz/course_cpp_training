// session 7 class 37 Abstract class

#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

class Animal {
protected:
	string name;
public:
	Animal() {
		cout << "defaul animal constructor" << endl;
	}
	Animal(string s) : name(s) {}
	virtual void speak() = 0;	
};

class Dog : public Animal {
private: 
	string raza;
public:
	Dog(string n) : Animal(n) {}
	void speak() {
		cout << "dog " << name << " speaking" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() {
		cout << "cat speaking" << endl;
	}
};

void test(Animal &a) {
	a.speak();
}

int main(){
	// no se puede inicializar una instancia de una clase abstracta
	/*Animal a;
	a.speak();*/
	
	Dog d("thundra");
	d.speak();
	l
	Cat c;
	c.speak();
	
	test(d);
	test(c);
	
	vector<Animal*> animals;
	animals.push_back(&d);
	animals.push_back(&c);
	
	cout << "---------------------in a vector of superclass" << endl;
	for(vector<Animal*>::iterator it = animals.begin(); it != animals.end(); it++){
		(*it)->speak();
	}
		
	return 0;
}
