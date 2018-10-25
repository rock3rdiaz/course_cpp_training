// session 8 class 63. Static class
// static_cast es un casting en tiemmpo de compilacion.

#include <iostream>

using namespace std;

class Animal {
    public:
        string name;
        void speak() {
            cout << "animal speaking" << endl;
        }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "dog speaking" << endl;
    }
    void dogRun() {
        cout << "dog running" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "cat speaking" << endl;
    }
    void catRun() {
        cout << "cat running" << endl; 
    }
};

int main() {

    Animal a;
    Dog d;
    Cat c;

    Animal test = static_cast<Animal>(c);
    test.speak();

    // no funciona dado que la clase base Animal no posee el
    // metodo al que se intenta acceder
    //Animal *test2 = &d;
    //test2->dogRun();

    // usando Rvalue reference
    Animal &&test3 = static_cast<Animal&&>(d);
    test3.speak();

    return 0;
}
