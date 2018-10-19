// session 8, class 51. Lambda capture expressions

#include <iostream>
using namespace std;

int main() {

    int a = 3;
    int b = 100;
    int c = 12; 
    
    // todas las variables por valor. Su valor NO podra ser modificado dentro
    // de la expresion lambda
    [=](){ cout << "a: " << a << ", b:" << b << ", c:" << c << endl; }();
    
    // todas las variables por referencia. Su valor SI podra ser modificado dentro
    // de la expresion lambda
    [&](){ a = 99; cout << "a: " << a << ", b:" << b << ", c:" << c << endl; }();

    // todas las variables por valor. Solo la variable c por referencia.
    [=, &c](){ c = 1212; cout << "a: " << a << ", b:" << b << ", c:" << c << endl; }();
    
    // todas las variables por referencia. La variable b por valor
    [&, b](){ a = 14; cout << "a: " << a << ", b:" << b << ", c:" << c << endl; }();
    
    return 0;
}

