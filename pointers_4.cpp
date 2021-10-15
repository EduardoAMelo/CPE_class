//Pointers 4
/*
Matrix
	é um ponteiro de um ponteiro ou seja **pointer

*/
#include <iostream>
using namespace std;

int main() {
	int **mat;
	int i = 0, j = 0, d, k;
	
	
	cout << "Dimensao";
	cin >> d >> k;
	
	
	//alocação
	mat = new int*[d];
	for (i = 0; i < d; i++){
		mat[i] = new int[k];
	}
	
	
	//leitura
	for (i = 0; i < d; i++) {
		for(j = 0; j < k; j++) {
			cout << "Digite o Valor da Posicao (" << i << ", " << j << "): ";
			cin >> mat[i][j];	
		}
	}
	

	//escrita
 	cout << "Matriz\n";
	for (i = 0; i < d; i++){ //exibicao da matriz original
    	for (j = 0; j < k; j++)
      		cout << mat[i][j] << ' ';
    	cout << "\n";
  }
  	
  	
  	//desalocacao das colunas de cada linha
  	for (i = 0; i < d; i++) 
	 delete[] mat[i];
  	delete[] mat;
	
	return 0;
}

