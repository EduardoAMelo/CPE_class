#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float coef_1[26], coef_2[26];
	int grau, i;

	cout << "Grau dos dois polinomios (grau maximo = 25): ";
	cin >> grau;
	while (grau < 0 || grau > 25) {//digitou fora do limite, repete a leitura
		cout << "Grau invalido, digite outra vez: ";
		cin >> grau;
	}
	cout << "Valores primeiro polinomio\n";
	for (i = grau; i >= 0; i--) { //leitura dos coeficientes
		cout << "coeficiente de x^" << i << ": ";
		cin >> coef_1[i];
	}
	
	cout << "Valores segundo polinomio\n";
	for (i = grau; i >= 0; i--) { //leitura dos coeficientes
		cout << "coeficiente de x^" << i << ": ";
		cin >> coef_2[i];
		coef_2[i] += coef_1[i];
	}
	
	cout << setprecision(1) << fixed << coef_2[grau] << "x^" << grau;
	for (i = grau - 1; i >= 0; i--) { //impressao do polinomio
		if (coef_2[i] != 0)
			if (coef_2[i] >= 0)
				cout << " + " << coef_2[i] << "x^" << i;
			else
				cout << " - " << -coef_2[i] << "x^" << i;
	}
	cout << endl;
	return 0;
}
