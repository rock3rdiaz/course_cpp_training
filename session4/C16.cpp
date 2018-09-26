// sesion 4, class 16. Maps

#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, int> people;
	
	people["mario"] = 50;
	people["luigi"] = 55;

	cout << "age of mario is: " << people["mario"] << endl;

	people.insert(pair<string, int>("toad", 15));
	people.insert(make_pair("browse", 100));

	if(people.find("mario") != people.end()) {
		cout << "mario is alive!" << endl;	
	}
	
	cout << "--------------- normal access" << endl; 
	for(map<string, int>::iterator it = people.begin(); it != people.end(); it++){					
		cout << "age of " << it->first << " is " << it->second << endl;	
	}
	
	cout << "--------------- pair access" << endl;
	for(map<string, int>::iterator it = people.begin(); it != people.end(); it++) {			
		pair<string, int> p = *it;		
		cout << "age of " << p.first << " is " << p.second << endl;	
	}
	
	return 0;
}
