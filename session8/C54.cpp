// session 8 class 54. Mutable lambdas.
// el keyword 'mutable' hace una copia local de la variable accesada desde el lambda

#include <iostream>

using namespace std;

int main() {

    int cats = 5;
    [cats]() mutable {
        cats += 3;
        cout << cats << endl;
    } ();

    cout << cats << endl;
    
    return 0;
}
