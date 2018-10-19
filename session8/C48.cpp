// session8, class 48. Object initialization, Default and delete
// los inicializadores siempre son los primeros en ejecutarse

#include <iostream>

using namespace std;

class Test {
    private:
        int age{10};
        string name{"mario"};
    public:
        Test() = default; // el constructor sin parametros sera la implementacion por defecto
        Test(const Test &other) = default;
        Test &operator=(const Test &other) = default;
        Test(string n) : name(n) {}
        void print() {
            cout << age << " : " << name << endl; 
        }

};

int main() {

    Test t;
    t.print();

    Test t2("luigi");
    t2.print();

    Test t3 = t2;
    t3.print();

    Test t4;
    t4 = t2;
    t4.print();

    return 0;
}

