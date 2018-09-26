// sesion 4, class 23. STL complex data types

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	
	map<string, vector<int> > scores;
	scores["messi"].push_back(90);
	scores["messi"].push_back(56);
	scores["messi"].push_back(70);
	scores["ronaldo"].push_back(88);
	scores["pogba"].push_back(56);
	scores["pogba"].push_back(32);

	for(map<string, vector<int> >::iterator it = scores.begin(); it != scores.end(); it++) {
		cout << it->first << flush;
		for(vector<int>::iterator _it = it->second.begin(); _it != it->second.end(); _it++) {
			cout << " " << *_it << " " << flush;
		}
		cout << endl;
	}

	return 0;
}
