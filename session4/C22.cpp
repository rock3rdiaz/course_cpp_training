// sesion 4, class 22. Sort, friend

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Character {
private: 
	string name;
public:
	Character(string name) : name(name) {}
	inline void print() {
		cout << "character is " << name << flush;	
	}
	friend bool comp(const Character &a, const Character &b);
	
};

bool comp(const Character &a, const Character &b) {
	return a.name < b.name;
};

int main() {
	
	vector<Character> characters;
	characters.push_back(Character("mario"));
	characters.push_back(Character("toad"));
	characters.push_back(Character("peach"));
	characters.push_back(Character("wario"));
	characters.push_back(Character("browser"));
	characters.push_back(Character("yoshi"));

	sort(characters.begin(), characters.end(), comp);

	for(vector<Character>::iterator it = characters.begin(); it != characters.end(); it++) {
		it->print();
		cout << endl;
	}

	return 0;
}
