// session 8, class 53. The standar function type
// Class template std::function is a general-purpose polymorphic function wrapper.

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

bool check(string &s) {
    return s.size() == 4;
};

// clase como un functor
class Checker {
    public:
        bool operator()(string &s) {
            return s.size() == 4;
        }
} checker1;

// la definicion del generico debe conicidir con la firma del metodo a recibir.
// de esta manera es posible tener referencia a cualquier callable
void run(function<bool(string&)> arg) {
    string t = "yoshi";
    cout << arg(t) << endl;
};

int main() {

    int size = 5;
    auto lambda = [size](string t){ return t.size() == size;};
    vector<string> texts { "mario", "luigi", "peach", "toad" };

    int count = count_if(texts.begin(), texts.end(), lambda);
    cout << count << endl;

    count = count_if(texts.begin(), texts.end(), check); // el nombre de una funcion es un puntero a la misma
    cout << count << endl;

    count = count_if(texts.begin(), texts.end(), checker1); // usamos la instancia de la clase como una funcion, 'functor'
    cout << count << endl;

    // usando standar fuction type 
    run(lambda);    
    run(checker1);
    run(check);

    function<int(int, int)> add = [](int a, int b){ return a + b; };
    cout << add(12, 15) << endl;

    return 0;
}

