// session 8 class 39. Decltype and typeid

#include <iostream>
#include <typeinfo>

using namespace std;

int main() {

	string s = "hi my friends";
	
	cout << typeid(s).name() << endl;
	
	//decltype(s) = string, retorna el tipo de la variable, mismo que es 
	// posible usar para definir nuevas variables.
	decltype(s) b = "yeah!";
	
	cout << typeid(b).name() << endl;
	
	return 0;
}

