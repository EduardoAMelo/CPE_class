#include <iostream>

using namespace std;

int main() {
	double a, b, c;
	int tipo;
	
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && b == c) {
			tipo = 1;
		} else {
			if (a == b || b == c || a == c) {
				tipo = 2;
			} else {
				tipo = 3;
			}
		}
	} else {
		tipo = 0;
	}
	
	
	switch (tipo) {
		case 1:
			cout << "equilatero";
			break;
		case 2:
			cout << "isosceles";
			break;
		case 3:
			cout << "escaleno";
			break;
		default:
			cout << "invalido";
	}
	return 0;
}
