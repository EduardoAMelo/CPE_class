#include <iostream>

using namespace std;

int main () {
	double a, b;
	char c;
	
	cout << "Escreva <numero> <operador> <segundo numero>: ";
	cin >> a >> c >> b;
	
	switch (c) {
		case '+':
			cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case '/':
			cout << a / b << endl;
			break;
		default:
			cout << "Operador Invalido!!!" << endl;
			
	}
	
	return 0;
}
