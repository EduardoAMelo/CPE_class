//arquivos 3
#include <iostream>
#include <fstream>
using namespace std;


int *le_vetor(int& n) {
	ifstream fr;
	int *v;
	int i;
	
	fr.open("teste2.txt");
	
	if (!fr.is_open()) {
		cerr << "Erro";
		return 0; //retorna endereco nulo
	}
	
	fr >> n;
	v = new int[n];
	
	for (i = 0; i < n; i++) {
		fr >> v[i];
	}
	
	fr.close();
	
	return v;
}

void escreve_vetor(int v[], int n) {
	ofstream fw;
	int i;
	
	fw.open("teste2_out.txt", ios::trunc);
	
	if(!fw.is_open()){
		cerr << "Erro";
		return;
 	}
 	
 	fw << n << '\n';
 	
 	for(i = 0; i < n; i++) {
 		fw << v[i] << '\n';
 		
	 }
	 fw.close();
}

int main() {
	int *v;
	int n;
	
	v = le_vetor(n);
	if(v != 0){
		escreve_vetor(v, n);
		delete[] v;
		return 0;
	} else {
		return 1;
	}
}







