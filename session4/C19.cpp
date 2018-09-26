// sesion 4, class 19. Multimaps

#include <iostream>
#include <map>

using namespace std;

int main() {

	multimap<int, string> loockup;

	loockup.insert(make_pair(1, "red"));
	loockup.insert(make_pair(1, "yellow"));
	loockup.insert(make_pair(3, "green"));
	loockup.insert(make_pair(4, "brown"));
	loockup.insert(make_pair(5, "white"));
	loockup.insert(make_pair(6, "black"));
	loockup.insert(make_pair(1, "blue"));
	loockup.insert(make_pair(6, "pink"));	

	// all elements
	cout << "------------------- all elements" << endl;
	for(multimap<int, string>::iterator it = loockup.begin(); it != loockup.end(); it++) {	
		cout << it->first << " : " << it->second << endl;
	}

	cout << endl;

	// from first occurrency to end
	cout << "------------------- from first occurrency to end" << endl;
	for(multimap<int, string>::iterator it = loockup.find(4); it != loockup.end(); it++) {	
		cout << it->first << " : " << it->second << endl;
	}

	cout << endl;
	
	// from range
	cout << "------------------- from range" << endl;
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = loockup.equal_range(1);
	for(multimap<int, string>::iterator it = its.first; it != its.second; it++) {	
		cout << it->first << " : " << it->second << endl;
	}

	cout << endl;
	
	// from range with auto sintax
	cout << "------------------- from range with auto sintax" << endl;
	auto auto_its = loockup.equal_range(6);
	for(multimap<int, string>::iterator it = auto_its.first; it != auto_its.second; it++) {	
		cout << it->first << " : " << it->second << endl;
	}

	return 0;
}
