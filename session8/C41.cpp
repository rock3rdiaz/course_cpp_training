// session 8 class 4. Range-based loops.

#include <iostream>
#include <vector>

using namespace std;

int main(){
	// sin auto
	cout << "----------------------------- sin auto" << endl;    
	const char* names[] = {"luigi", "browser", "mario", "toad"};
    for(const char* n : names){
        cout << n << endl;
    }    

	// con auto
	cout << "----------------------------- con auto" << endl;
	auto auto_names = {"luigi", "browser", "mario", "toad"};
    for(auto n : auto_names){
        cout << n << endl;
    }  

	vector<int> numbers;
	numbers.push_back(7);
	numbers.push_back(2);
	numbers.push_back(45);
	numbers.push_back(3);
	numbers.push_back(1);
	numbers.push_back(12);
	
	cout << "----------------------------- sin auto" << endl;    
	for(int n : numbers) {
		cout << n << endl;	
	}

	cout << "----------------------------- con auto" << endl;    
	for(auto n : numbers) {
		cout << n << endl;	
	}

    return 0;
}
