// session 6 , class 33. Template functions and type inference

#include <iostream>
using namespace std;

void print(string t) {
	cout << "inside print string non-template function: " << t << endl;
};

template<typename T>
void print(T t) {
	cout << "inside print template function: " << t << endl;
};

template<typename T>
void show() {
	cout << "inside show function template: " << T() << endl;
};

void print(int t) {
	cout << "inside print int non-template function: " << t << endl;
};

/**
Para saber como C++ define que metodo llamar en 
print(string("rocker"));
print("rocker");

leer la siguiente respuesta:

James — Profesor asistente  · hace 21 minutos  Respuesta 
Hi Andres,

"rocker" is of type const char *. The compiler will instantiate the template function, replacing T with const char *. When determining which function to call, it will compare this instantiated template against the non-template function which takes string. This requires a conversion (from string to const char *), whereas the instantiated template is an exact match. Under C++'s rules, the compiler prefers the instantiated template function.

On the other hand, if you pass an actual string to print(), for example

print(string("rocker"));

then the compiler will instantiate the template function with T replaced by string. The two functions are equally good matches. However, under C++'s rules, a non-template function trumps a template function, so the compiler prefers the non-template function.
*/

int main(){
	print<string>("rocker");
	print(12);
	print(string("rocker"));
	print("rocker");
	show<int>();

	return 0;
}
