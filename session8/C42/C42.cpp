// session 8 class 42. Nested template classes
// el operador :: permite acceder a clases anidadas.


#include <iostream>
#include "ring.h"

using namespace std;

int main(){

    ring<int>::iterator it;
    it.print();

    return 0;
}
