// session 7 class 38 Functors
// son objetos que se tratan como si fuesen funciones.
// un functor siempre sobrecarga el operador ()

#include <iostream>
#include <vector>
using namespace std;

struct CPU {
	CPU() {}
	virtual void operator()() = 0;
};

struct nes : public CPU{
	nes() {}
	void operator()() {
		cout << "hi, am a 6502!" << endl;
	}l
};

struct snes : public CPU {
	snes() {}
	void operator()() {
		cout << "hi, am a 65016!" << endl;
	}
};

// son versiones equivalentes. 
// con sintaxis de punteros
void check(CPU* cpu) {
	(*cpu)();
};

// con sintaxis de referencias
void check(CPU &cpu) {
	cpu();
};

int main(){
	
	nes s;
	check(s);
	
	snes sn;
	check(&sn);
		
	return 0;
}



/**

Ejemplo de functors

#include <iostream>

// Abstract base class                                                                                                                                                                                                  
class BinaryFunction {
public:
  BinaryFunction() {};
  virtual double operator() (double left, double right) = 0;
};

// Add two doubles                                                                                                                                                                                                      
class Add : public BinaryFunction {
public:
  Add() {};
  virtual double operator() (double left, double right) { return left+right; }
};

// Multiply two doubles                                                                                                                                                                                                 
class Multiply : public BinaryFunction {
public:
  Multiply() {};
  virtual double operator() (double left, double right) { return left*right; }
};

double binary_op(double left, double right, BinaryFunction* bin_func) {
  return (*bin_func)(left, right);
}

int main( ) {
  double a = 5.0;
  double b = 10.0;

  BinaryFunction* pAdd = new Add();
  BinaryFunction* pMultiply = new Multiply();

  std::cout << "Add: " << binary_op(a, b, pAdd) << std::endl;
  std::cout << "Multiply: " << binary_op(a, b, pMultiply) << std::endl;

  delete pAdd;
  delete pMultiply;

  return 0;
}
*/
