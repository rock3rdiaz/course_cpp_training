// sesion 4, class 12. Basic vector.


#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> strings;
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	for(int i = 0; i < strings.size(); i++) {
		cout << "with index: " << strings[i] << endl;
	}

	for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
	cout << "with iterator: " << *it << endl;
}

	return 0;

}
