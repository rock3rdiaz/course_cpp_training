// session 8 class 44. Making classes iterable
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
    
    // C++ 98 style
    for(ring<string>::iterator it = names.begin(); it != names.end(); it++) {
        cout << *it << endl;
    }

    cout << endl;

    // C++ 11 style
    for(string s : names){
        cout << s << endl;    
    }

    return 0;
}

