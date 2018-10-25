// session 8 class 66. Perfect forwarding

#include <iostream>

using namespace std;

class Test {

};

template<typename T>
void call(T &&arg) {
    check(forward<T>(arg));
};

void check(Test &test) {
    cout << "lvalue" << endl;
};

void check(Test &&test) {
    cout << "rvalue" << endl;
};

int main() {
    
    Test t;
    call(t);
    call(Test());

    return 0;
}
