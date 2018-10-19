// session 8 class 43. Nested template classes
// el operador :: permite acceder a clases anidadas.


#include <iostream>
#include "ring.h"

using namespace std;

int main(){

    ring<string> names(4);
    names.add("mario");
    names.add("toad");
    names.add("luigi");
    names.add("browser");
    names.add("peach");
    
    for(int i = 0; i < names.size(); i++) {
        cout << names.get(i) << endl;
    }

    return 0;
}

