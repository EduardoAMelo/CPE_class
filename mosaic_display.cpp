#include <iostream>

int main() {
	int i,n,m,t;
	using namespace std;
	
	cout << "Numero inicial: ";
	cin >> n;
	t = n;
	
	for(m = 0; m < n; m++, t--) {
		for(i = 0; i < t; i++)
		cout << "*";
		cout << "\n";
	}
	
	t = 1;
	for(m = 0; m < n; m++, t++) {
		for(i = 0; i < t; i++)
		cout << "*";
		cout << "\n";
	} 
	return 0;
}
