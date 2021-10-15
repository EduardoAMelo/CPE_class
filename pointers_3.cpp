//Pointers 3
/*
Alocação Dinâmica
	new: Aloca um espaço de memória
		ponteiro = new type;
		ponteiro = new type[]
		O ponteiro recebe a localizaçao do primeiro endereço do vetor
	
	delete: Libera um espaço de memória (bom para um programa mais otimizado)
		delete ponteiro;
		delete[] ponteiro;

*/
#include <iostream>
using namespace std;

int main() {
	int *foo;
	foo = new int[5];

//Leitura	
	for (int i = 0; i < 5; i++){
		foo[i] = i; //ou *(foo + i)
		cout << foo[i] << ' ';
	}

//Delete
	delete[] foo;
	
	return 0;
}
