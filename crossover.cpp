#include <iostream>
using namespace std;

int* cross(int pai[], int mae[], int n, int pontocorte);

int main() {
	int n, corte, *pai, *mae, i, element, *crossArr;
	
	cin >> n;
	
	corte = n / 2;
	pai = new int[n];
	mae = new int[n];
	
	// leitura de informações para matrizes pai e mãe
	for(i = 0; i < n; i++) {
		cin >> element;
		pai[i] = element;	
	}
	
	for(i = 0; i < n; i++) {
		cin >> element;
		mae[i] = element;	
	}
	
	//chamada da função
	crossArr = cross(pai, mae, n, corte);
	
	
	//print do resultado
	for (i = 0; i < n; i++){
		cout << crossArr[i] << " ";		
	}
	cout << endl;
	
	for (i = n; i < n * 2; i++){
		cout << crossArr[i] << " ";		
	}
	  		
	return 0;
}

int* cross(int pai[], int mae[], int n, int pontocorte) {
	int *result, i;
	
	result = new int[n * 2];
	
	
	//primeira linha
	for(i = 0; i < pontocorte; i++) {
		result[i] = mae[i];
	}
	
	for(i = pontocorte; i < n; i++) {
		result[i] = pai[i];
	}
	
	//segunda linha
	for(i = 0; i < pontocorte; i++) {
		result[i + n] = pai[i];
	}
	
	for(i = pontocorte; i < n; i++) {
		result[i + n] = mae[i];
	}
	
	return result;
}
