#include <iostream>
using namespace std;

double* concatena(double p1[], int n1, double p2[], int n2);

int main() {
	int n1, n2,i, elements;
	double *arr, *arr2, *arrfinal;
	
	cout << "Dimensao da lista 1 e 2: ";
	cin >> n1 >> n2;
	
	arr = new double[n1];
	arr2 = new double[n2];
	
	cout << "Digite os valores da lista 1 separados por espaco: ";
	for(i = 0; i < n1; i++){
		cin >> elements;
		arr[i] = elements;
	}
	
	cout << "Digite os valores da lista 2 separados por espaco: ";
	for(i = 0; i < n2; i++){
		cin >> elements;
		arr2[i] = elements;
	}
	
	arrfinal = concatena(arr, n1, arr2, n2);
	
	for(int i = 0; i < n1 + n2; i++) {
		cout << arrfinal[i] << " ";
	}
	
	return 0;
}


double* concatena(double p1[], int n1, double p2[], int n2) {
	int i;
	double *arr_ret;
	
	arr_ret = new double[n1 + n2];
	
	for(i = 0; i < n1; i++){
		arr_ret[i] = p1[i];
	}
	
	for(i = n1; i < n1 + n2; i++){
		arr_ret[i] = p2[i - n1];
	}
	
	
	return arr_ret;
}


