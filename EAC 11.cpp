
#include <iostream>
using namespace std;

void imprime_polinomio(double coef[], int grau);
void le_polinomio(double coef[], int& grau);
void calcula_derivada(double coef[], int& grau);

int main() {
	int grau;
	double coef[25];
	
	
	
	le_polinomio(coef, grau);
	while(grau >= 0) {
		imprime_polinomio(coef, grau);
		calcula_derivada(coef, grau);
	}
}


void le_polinomio(double coef[], int& grau){
	
	cout << "Grau do polinomio (grau maximo = 25): ";
	cin >> grau;
	
	while (grau < 0 || grau > 25) {//digitou fora do limite, repete a leitura
		cout << "Grau invalido, digite outra vez: ";
		cin >> grau;
	}
	
	cout << "Valores do polinomio\n";
	
	for (int i = grau; i >= 0; i--) { //leitura dos coeficientes
		cout << "coeficiente de x^" << i << ": ";
		cin >> coef[i];
	}	
}


void imprime_polinomio(double coef[], int grau) {
	cout << coef[grau] << "x^" << grau;
	for (int i = grau - 1; i >= 0; i--) { //impressao do polinomio
		if (coef[i] != 0){
			if (coef[i] >= 0)
				cout << " + " << coef[i] << "x^" << i;
			else
				cout << " - " << -coef[i] << "x^" << i;
		}
	}
	cout << '\n';
}

void calcula_derivada(double coef[], int& grau){
	for(int i = 1; i <= grau; i++){
		coef[i - 1] = i * coef[i];
		}
	grau --;		
}
	
	
	
	
	
	
	
