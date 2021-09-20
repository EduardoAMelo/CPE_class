//funtions 3
//How scope and namespaces work!!

#include <iostream>
using namespace std;

//'int global' can be invoked everywhere
int global;

void print_global () {
	cout << global << "\n";
}

void read_global () {
	cin >> global;
}

namespace bar{
	const double pi = 3.14;
	double value() {
		return 2*pi;
	}
}


int main () {
	//'int a' is not visible outside 'int main()'
	int a;
	global = 0;
	cout << "Reading: ";
	read_global();
	
	cout << "Printing: ";
	print_global();
	
	cout << global << endl;

	//the origin of namespace std is something like this	
	cout << bar::pi << '\n';
	return 0;
}
