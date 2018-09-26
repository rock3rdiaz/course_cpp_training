// sesion 4, class 21. Stack and Queue

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Character {

private:
	string name;
public:
	Character() : name("") {}
	Character(string n) : name(n) {}
	~Character() {
		cout << "object with name " << name << " has destroyed!" << endl;	
	}
	void print() {
		cout << name << endl;	
	}
	
}; 

int main() {

	// LIFO structure
	stack<Character> characterStack;
	characterStack.push(Character("mario"));
	characterStack.push(Character("wario"));
	characterStack.push(Character("toad"));

	// top element
	// s is a reference to destroyed element!
	Character &s = characterStack.top();
	//characterStack.pop();
	s.print();

	cout << endl;

	// FIFO structure
	queue<Character> characterQueue;
	characterQueue.push(Character("luigi"));
	characterQueue.push(Character("browser"));
	characterQueue.push(Character("donkey kong"));

	// front element
	// q is a reference to destroyed element!
	Character &q = characterQueue.front();
	characterQueue.pop();
	q.print();


	// back element
	Character &b = characterQueue.back();
	characterQueue.pop();
	b.print();	

	return 0;
}
