// session 8 class 55. Delegating constructors
// desde C++11 es posible llamar desde un constructor a otros.

#include <iostream>

using namespace std;

class Parent {
    private: 
        string name;
    public:
        Parent() : Parent("rocker") {
            cout << "no parameters contructor" << endl;
        }
        Parent(string n) {
            name = n;
            cout << "parameters contructor" << endl;
        }
};

class Child : public Parent {
    public:
        Child() = default;
};

int main() {
 
    Parent p;
    Child c;
    return 0;
}   
