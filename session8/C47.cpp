// session8, class 47. Initializer list

#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

class Test {
    public:
        Test(initializer_list<string> names) {
            for(auto s: names) {
                cout << s << endl;
            }
        }

        void print(initializer_list<string> names) {
            for(auto s: names) {
                cout << s << endl;
            }
        }
};


int main() {

    vector<string> names = {"mario", "luigi"};
    cout << names[1] << endl;

    Test t({"peach", "toad"});

    t.print({"donkey kong", "browser", "wario"});

    return 0;
}
