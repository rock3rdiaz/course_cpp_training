// session 8 class 45. Initialization in C++ 98

#include <iostream>

using namespace std;

int main() {

    class Test {
        public:
            string name;
    };

    Test t1 = {"rocker"};

    cout << t1.name << endl;

    struct S {
        string name;
    } s1 = {"lugi"}, s2 = {"mario"};

    cout << s1.name << endl;
    cout << s2.name << endl;

    return 0;
}
