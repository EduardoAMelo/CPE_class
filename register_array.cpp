//Registro com Array
#include <iostream>
using namespace std;
#define SIZE 5

struct teste {
	float inside
	float fichaa
};

// Basta utilizar teste.provas.inside
struct ficha {
	int matricula;
	float media;
	teste provas;
};

int main() {
	ficha teste[SIZE];
	int i;
	
	for(i = 0; i < SIZE; i++) {
		cout << "Matricula aluno " << i + 1 << ": ";
		cin >> teste[i].matricula;
		
		cout << "Media aluno " << i + 1 << ": ";
		cin >> teste[i].media;  
	}
	
	for(i = 0; i < SIZE; i++) {
		cout << "Matricula: " << teste[i].matricula
			 << " Media: " << teste[i].media << endl;
	}
	
	return 0;
}
