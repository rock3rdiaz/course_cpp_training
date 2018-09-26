// sesion 4, class 17. Maps with custom objects
// read about copy contructors.

#include <iostream>
#include <map>

using namespace std;

class Team {
	private:		 
		string name;
	public:
		Team(const Team &ref) {
			name = ref.name;
			cout << "copy contructor runnig!" << endl;	
		}
		Team() : name("") {
			cout << "default contructor runnig!" << endl;	
		}
		Team(string n) : name(n) {
			cout << "custom contructor runnig!" << endl;
		}
		inline void print() { cout << "the team name is :" << name << endl; }
};

int main() {

	map<int, Team> teams;
	teams[0] = Team("liverpool");
	teams[1] = Team("juventus");
	teams[2] = Team("internatzionale");
	teams[3] = Team("independiente");
	teams[4] = Team("america de cali");

	teams.insert(make_pair(10, Team("parma")));

	for(map<int, Team>::iterator it = teams.begin(); it != teams.end(); it++) {
		it->second.print();
	}	

	return 0;
}
