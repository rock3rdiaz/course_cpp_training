// session 8, class 50. Lambda parameters and return types

#include <iostream>
using namespace std;

void test(double (*pFunc)(double, double)) {
    cout << pFunc(10, 2) << endl;
};

int main() {

    auto f = [](double a, double b) -> double{
        if(b == 0) {
            return 0;
        }
        return a / b;
    }; 

    test(f);

    return 0;
}
