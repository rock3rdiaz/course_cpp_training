// a complex number class

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

namespace rock3r {

	class Complex {
	private:
		double real;
		double imaginary;
	public:
		Complex();
		Complex(double r, double i);
		Complex(const Complex &c);
		inline double getReal() const { return real; }
		inline double getImaginary() const { return imaginary; } 		
		const Complex &operator=(const Complex &c);
		Complex &operator+(const Complex &c);
		bool operator==(const Complex &c);
	};

	ostream &operator<<(ostream &out, const Complex &c);
}

#endif
