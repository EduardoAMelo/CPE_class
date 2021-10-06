//Arguments by Reference
/*
	1-Pass arguments by reference change the scope of a local function in another function
	2- type name (int& arg_1, string& arg_2....)
		as you see we use "&" after the type selection of an argument 

*/

#include <iostream>
using namespace std;

void change(int& x, int& y) {
	int aux;
	aux = x;
	x = y;
	y = aux;
}

int main() {
	int a = 100, b = 200;
	cout << a << " " << b << endl;
	
	change(a, b);
	cout << "A and B changed value: "<< a << " " << b;
	return 0;
	
}
