//Pointers 3
/*
Aloca��o Din�mica
	new: Aloca um espa�o de mem�ria
		ponteiro = new type;
		ponteiro = new type[]
		O ponteiro recebe a localiza�ao do primeiro endere�o do vetor
	
	delete: Libera um espa�o de mem�ria (bom para um programa mais otimizado)
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
