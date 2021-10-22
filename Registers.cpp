//Registros
/*
Uma estrutura que pode agrupar varios tipos diferentes
*/
#include <iostream>
using namespace std;

struct ficha {
	int matricula;
	float media;
};

int main() {
	ficha teste, teste2;
	
	cout << "Matricula: ";
	cin >> teste.matricula;
	cout << "Media: ";
	cin >> teste.media;
	cout << "Aluno " << teste.matricula
		 << " Tirou media " << teste.media
		 << endl;
	
	//copiando
	teste2 = teste;
	cout << "Aluno " << teste2.matricula
		 << " Tirou media " << teste2.media
		 << endl;
		 
	return 0;	
}
