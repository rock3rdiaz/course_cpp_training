// session 8 class 68. Unique pointers
// std::unique_ptr is a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique_ptr goes out of scope. 

#include <iostream>
#include <memory>

using namespace std;

class Test {
    public:
        Test() {
            cout << "created" << endl;
        }
        void greet() {
            cout << "hi" << endl;
        }
        ~Test() {
            cout << "destroyed" << endl;
        }
};

int main() {

    // destruye de manera automatica el puntero al salir del scope
    unique_ptr<Test[]> t = make_unique<Test[]>(3);
    t[2].greet();

    // el puntero NO se destruye de manera automatica
    // Test* t2 = new Test();
    // t2->greet();

    return 0;
}
