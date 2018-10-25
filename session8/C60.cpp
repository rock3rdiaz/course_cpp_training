// session8, class 60. Rvalue and Rvalue references


#include <iostream>
using namespace std;

class Test {
    private : string name;
    public:
        Test() = default;              
};

void check(const Test &reference) {

    cout << "Lvalue reference" << endl;
};

void check(Test &&reference) {
    cout << "Rvalue reference" << endl;
};

Test getTest() {
    return Test();
}

int main() {

    Test t1;
    Test* t2 = new Test();

    check(t1);
    check(Test());
    check(getTest());
    check(*t2);

    return 0;
} 
