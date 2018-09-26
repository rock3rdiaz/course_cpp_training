// sesion 4, class 18. Custom objects as map keys
// read about copy contructors.

#include <iostream>
#include <map>

using namespace std;

class Team {
	private:		 
		string name;
		string country;
	public:
		Team(const Team &ref) {
			name = ref.name;
			country = ref.country;	
		}
		Team() : name(""), country("") {
		}
		Team(string n, string c) : name(n), country(c) {
		}
		// overloading '<' operator
		bool operator<(const Team &t) const {
			if(name == t.name) {
				return country < t.country;			
			} else {
				return name < t.name;
			}
		}
		inline void print() const { cout << "the team's name " << 
			name << " from " << country << flush; }
};

int main() {

	map<Team, int> teams;
	teams[Team("liverpool", "england")] = 1; 
	teams[Team("juventus", "italy")] = 2;
	teams[Team("internatzionale", "italy")] = 3;
	teams[Team("independiente", "argentina")] = 4;
	teams[Team("america de cali", "colombia")] = 5;

	teams.insert(make_pair(Team("lazio", "england"), 6));
	teams[Team("america de cali", "mexico")] = 99;

	for(map<Team, int>::iterator it = teams.begin(); it != teams.end(); it++) {
		cout << it->second << ": " << flush;		
		it->first.print();
		cout << endl;
	}	

	return 0;
}
