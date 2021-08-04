//"Input" and "Output" commands

#include <iostream>
#include <iomanip> //std::setprecision and std::fixed


using namespace std;

int main () {
	int a = 1, b, c;
	/*
	Streams ou fluxos são uma abstração que  a linguagem c++ oferece para realizarmos operações de entrada e saída
	1) cin "stream de entrada padrão"
		">>" operador de extração pra realizar a leitura de dados
	2) cout "stream de saída padrão"
		"<<" utilizamos a operação de inserção pra realizar prints
			"\n" quebra de linha
			"endl" quebra de linha e esvazia o buffer (obriga escrever os dados de imediato)
			"\" + caracteres especiais para dar print por exemplo I\´m === I´m		
	3) cerr "stream de erro padrão (saída)"
	4) clog "stream de logging padrão (saída)"
	*/
	
	cout << "example \n" << a << "4\\ever" << endl; //cout working
	cin >> b >> c; //cin working
	return 0;
};
