
#include <iostream>

using namespace std;

template<typename T>
class ring {
    public:
        class iterator;
};

template<typename T>
class ring<T>::iterator {
    public:
        void print() {
            cout << "hi from iterator: " << T() << endl;
        }
};
