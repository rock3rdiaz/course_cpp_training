// session 8, class 49. Lambda experssions

#include <iostream>
#include <typeinfo>
using namespace std;

// funcion que recibe el puntero a una funcion
void test(void (*pFunc)()) {
    pFunc();
}

int main() {

    [](){ cout << "lambda ejecutada automaticamente" << endl; }();
    auto func = [](){ cout << "lambda ejecutada almacenando una referencia a la misma" << endl; };

    func();
    test([](){ cout << "lambda ejecutada como un puntero a una funcion" << endl; });

    cout << typeid(func).name() << endl;

    return 0;
}
