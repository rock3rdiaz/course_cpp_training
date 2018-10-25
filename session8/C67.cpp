// session 8 class 67. Bind
// bind crea un 'alias' de una funcion.

#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

class Test {
    public:
        int add(int a, int b, int c) {
            cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
            return a + b + c;
        }
};

int run(function<int(int, int)> func) {
    return func(10, 20);
};

int main() {

    Test t;
    auto calculate = bind(&Test::add, t, _2, 1, _1);
    cout << run(calculate) << endl;

    return 0;
}
