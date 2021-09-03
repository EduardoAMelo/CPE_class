#include <iostream>

using namespace std;

int main() {
	int impar = 0, par = 0, total_impar = 0, total_par = 0, var_holder, tipo;
	
	cin >> var_holder;
	while(var_holder != 0 ) {
		if ((var_holder % 2) == 0) {
				tipo = 1;
			} else {
				tipo = 2;
			}
			
		switch(tipo) {
			case 1:
				par++;
				total_par += var_holder;
				break;
			case 2:
				impar++;
				total_impar += var_holder;
				break;
		}
		cin >> var_holder;
	}
	
	cout << impar << " impares, total = " << total_impar << endl;
	cout << par << " pares, total = " << total_par;

	return 0;	
}
