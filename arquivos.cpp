//Arquivos
/*
ofstream: classe de objetos stream para escrita de arquivos
	<< vai escrever no arquivo
ifstream: classe de objetos stream para leitura de arquivos
	>> vai pegar do arquivo e vai passar para o código
fstream: classe de objetos stream para escrita e leitura de arquivos
*/
#include <iostream>
#include <fstream>
using namespace std; 

int main() {
	ifstream file;
	string s;
	
	file.open("teste.txt");
	
	if (file.is_open() == false) {
		cerr << "Erro!";
		return 1; //erro
	}
	
	while(getline(file,s))
		cout << s << '\n';
	file.close();// para outros codigos lerem 
	
	return 0; //sucesso
}
