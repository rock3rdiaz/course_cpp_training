// session 7 , class 34. Function pointers

#include <iostream>
using namespace std;

void print(string value) {
	cout << "value is " << value << endl;
}

int main(){

	void (*pPrint)(string) = &print;
	(*pPrint)("rocker");

	void (*p2Print)(string) = print; // el nombre de una funcion es un puntero a la misma
	p2Print("diaz");

	return 0;
}
