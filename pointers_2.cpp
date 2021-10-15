//Pointers 2
/*
	type name ( type *var1, type *var2) {}
		Funciona como passagem de argumentos por referencia
		O outro e melhor!!!
	Vetores são pointers tbm
		v[4] == *(v + 4)
			Onde v == o endereço do primeiro elemento
*/ 
#include <iostream>
using namespace std;

void print_array(int v[], int n) {
	int i;
	for(i = 0; i < n ; i++) {
		cout << v[i] << ' ';
	cout << "\n";
	}
}

int main() {
	int v[] = {10, 20, 30, 40, 50};
	
	print_array(v, 5);
	print_array(&v[1], 4); // ou v + 1
}
