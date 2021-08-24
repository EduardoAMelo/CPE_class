#include <iostream>

using namespace std;

int main() {
	float a, b, c;
	
	cout << "Insira o primeiro numero: ";
	cin >> a;
	
	cout << "Insira o segundo numero: ";
	cin >> b;
	
	cout << "Insira o terceiro numero: ";
	cin >> c;
	
	//comparadores de igualdade ou diferença entre as variaveis.
	// tambem um comparador de ordem crescente.
	if ((a != b) && (a != c) && (b != c)) {
		if ((a > b) && (a > c)) {
			if (b > c) {
				cout << c << " " << b << " " << a;
			} else {
				cout << b << " " << c << " " << a;
			}
			
		} else {
			if ((b > a) && (b > c)) {
				if (a > c) {
					cout << c << " " << a << " " << b;
				} else {
					cout << a << " " << c << " " << b;
				}
			} else {
				if ((c > a) && (c > b)) {
					if (a > b) {
						cout << b << " " << a << " " << c;
					} else {
						cout << a << " " << b << " " << c;
					}
				}
			}
		}
	} else {
		if ((a == b) && ((a == b) != c)) {
			if ((a == b) > c) {
				cout << c << " " << a << " " << b;
			} else {
				cout << a << " " << b << " " << c;
			}
		} else {
			if ((a == c) && ((a == c) != b)) {
				if ((a == c) > b) {
					cout << b << " " << a << " " << c;
				} else {
					cout << a << " " << c << " " << b;
				}
			} else {
				if ((b == c) && ((b == c) != a)) {
					if ((b == c) > a) {
						cout << a << " " << b << " " << c;
					} else {
						cout << b << " " << c << " " << a;
					}
				} else {
					if (a == b == c) {
						cout << a << " " << b << " " << c;
					}
				}
			}
		}
	}
	return 0;
}
