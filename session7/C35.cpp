// session 7 , class 35. Using function pointers

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool match(string value, int length) {
	return value.size() == length;
}

// al parecer solo puede ser pasada a la funcion count_if si recibe un unico parametro
bool match2(string value) {
	return value.size() == 6;
}

int countMatches(const vector<string> &strings, bool (*pMatch)(string, int)) {
	int count = 0;
	for(int i = 0; i < strings.size(); i++) {
		if(pMatch(strings[i], 6))
			count++;
	}
	return count;
}

int main(){

	vector<string> strings;
	strings.push_back("rocker");
	strings.push_back("diaz");
	strings.push_back("cuatro");
	strings.push_back("sol");
	strings.push_back("america");
	strings.push_back("futbol");
	strings.push_back("ryu");
	strings.push_back("mario");
	strings.push_back("holanda");
	strings.push_back("rocker");

	cout << "the count is " << count_if(strings.begin(), strings.end(), match2) << endl;	
	cout << "the count is " << countMatches(strings, match) << endl;

	return 0;
}
