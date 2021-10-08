//Arguments by reference
/*
	Arrays works like a reference when passed like arguments;
		as default the array return the value of your first element as a reference;
		
	Matrix needs the second dimension int mat [] [10];


*/

#include <iostream>
using namespace std;

void altera(int vet[], int x) {
	vet[0] = -1;
	x = -1;
}


int main() {
	int vet[] = {0, 1, 2, 3};
	int x = 0;
	
	altera(vet, x); //vet[0] é alterado e x não!!!
	cout << "Valores de Vet[0] e x: "<< vet[0] << " " << x << endl;
	
	return 0;
}
