// a complex number implementation

#include "Complex.h"

namespace rock3r {

ostream &operator<<(ostream &out, const Complex &c) {

	cout << "operator<< executed" << endl;	

	return out << "(" << c.getReal() << ", " << c.getImaginary() << "i)" << flush;
}

Complex::Complex() : real(0), imaginary(0) {
	cout << "defult constructor executed" << endl;
}

Complex::Complex(double r, double i) : real(r), imaginary(i) {
	cout << "custom constructor executed" << endl;
}

Complex::Complex(const Complex &c) {

	cout << "copy constructor executed" << endl;

	real = c.real;
	imaginary = c.imaginary;
}

const Complex &Complex::operator=(const Complex &c) {

	cout << "operator= executed" << endl;
	
	real = c.real;
	imaginary = c.imaginary;

	return *this;
}

Complex &Complex::operator+(const Complex &c) {
	Complex *t = new Complex();
	t->real = this->real + c.real;
	t->imaginary = this->imaginary + c.imaginary;	
	return *t;
}

}
