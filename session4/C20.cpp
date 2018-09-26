// sesion 4, class 20. Set
// all elements are unique

#include <iostream>
#include <set>

using namespace std;

class Player {
private:
	string name;
public:
	Player() : name("") {}
	Player(string name) : name(name) {}
	Player(const Player &player) {
		name = player.name;
	}	
	inline void print() const {
		cout << "the player is " << name << flush;	
	}
	bool operator<(const Player &player) const {
		return name < player.name;
	}
		
};


int main() {

	set<int> numbers;
	numbers.insert(12);
	numbers.insert(32);
	numbers.insert(1);
	numbers.insert(43);
	numbers.insert(12);
	numbers.insert(45);
	numbers.insert(45);

	for(set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}
	
	// find element
	cout << "--------------found element with find" << endl;
	if(numbers.find(45) != numbers.end()) {
		cout << "element founded!" << endl;
	}

	// find element
	cout << "--------------found element with count. 1=true, 0=false" << endl;
	if(numbers.count(45)) {
		cout << "element founded!" << endl;
	}

	set<Player> players;
	players.insert(Player("messi"));
	players.insert(Player("pogba"));
	players.insert(Player("ronaldo"));
	players.insert(Player("arizteguieta"));

	for(set<Player>::iterator it = players.begin(); it != players.end(); it++) {
		it->print();
		cout << endl;
	}

	return 0;
}
