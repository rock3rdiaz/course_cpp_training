// session 8, Class 58. Rvalue and Lvalue
/* Todas las expresiones de C++ son o un lvalue o un rvalue. Un lvalue es un objeto que persiste más allá de una expresión. Se puede pensar en un lvalue como en un objeto que tiene un nombre. Todas las variables, incluyendo las no modificables (const) son lvalues.
 Un rvalue es un valor temporal que no persiste más allá de la expresión en la que se usa.*/

#include <iostream>

using namespace std;

string getString() {

    return "rocker";
};

int main() {

    string s = "mario";
    string* pString = &s;

    // no funciona dado que los valores de retorno son
    // valores temporales y estos no son Rvalues
    //string* pString2 = &getString();

    return 0;
}
