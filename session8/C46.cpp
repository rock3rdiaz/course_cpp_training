// session 8 class 46. Initialization C++ 11

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int a {5};
    cout << a << endl;

    string s {"mario"};
    cout << s << endl;

    int arr[] {1,2,3,4,5,6};
    cout << arr[2] << endl;

    string sarr[] {"peach", "mario", "toad"};
    cout << sarr[1] << endl;

    struct {
        string name;
    } s1 {"toad"};
    cout << s1.name << endl;

    int *pstr {}; // equivalent to int *pstr = nullptr;
    cout << pstr << endl;

    string *pSarr = sarr;
    cout << pSarr[0] << endl;

    vector<int> numbers {1,2,3,4,5,6,7,8,9,0};
    cout << numbers[8] << endl;

    return 0;
}
