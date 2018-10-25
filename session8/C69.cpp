// session 8 class 69. Shared pointers
// std::shared_ptr is a smart pointer that retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object
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
    
    shared_ptr<Test> test1(nullptr);
    {
        shared_ptr<Test> test2 = make_shared<Test>();
        auto test3 = test2;    
    }

    cout << "finished" << endl;

    return 0;
}
