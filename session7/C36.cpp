// session 7 class 36. Object Slicing and Polymorphism

#include <iostream>
using namespace std;

class Parent {
private:
	string name;
public:
	Parent() {
		cout << "Parent default constructor" << endl;
	}
	Parent(const Parent &p) {
		cout << "Parent copy constructor" << endl;
	}
	virtual void print() {
		cout << "parent print " << name << endl;
	}
};

class Child : public Parent {
private:
	int age;
public:
	void print() {
		cout << "child print " << age << endl;
	}

};

class Dog : public Child {
private:
	string name;
	int age;
public:
	Dog() {
		cout << "Dog default constructor" << endl;
	}
	void print() {
		cout << "dog print " << age << endl;
	}
};


int main(){

	/*Child c1;	
	c1.print();
	Dog d1;
	Parent &p2 = d1;
	p2.print();
	
	Child c2;
	Parent &p1 = c2;
	p1.print();*/
	
	// se hace necesario redefinir el constructor copia
	// object slicing. Loas atributos y metodos propios de la subclase son eliminados
	// quedando una clase base completa.
	Parent p2 = Child();
	p2.print();
	
	return 0;
}
