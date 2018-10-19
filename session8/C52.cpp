// session 8, class 51. Lambda capture expressions

#include <iostream>
using namespace std;

class Test{
    private:
        int a {2};
        int b {21};
    public:
        void run() {
            int c {10};
            int d {23};

            auto lambda = [&](){
                cout << c << endl;
                cout << a << endl;
            };

            lambda();
        }    
};

int main() {
   
    Test t;
    t.run();

    return 0;
}


