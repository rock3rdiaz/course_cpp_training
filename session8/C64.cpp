// session 8 class 64. Dynamic class
// dynamic_cast es un casting en tiemmpo de ejecucion.

#include <iostream>

using namespace std;

class Animal {
    public:
        string name;
        virtual void speak() {
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

    Animal* test = dynamic_cast<Dog*>(&d);
    if(test == nullptr)
        cout << "invalid casting" << endl;
    else    
        test->speak();

    return 0;
}
