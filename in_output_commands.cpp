//"Input" and "Output" commands

#include <iostream>
#include <iomanip> //std::setprecision and std::fixed


using namespace std;

int main () {
	int a = 1, b, c;
	/*
	Streams ou fluxos s�o uma abstra��o que  a linguagem c++ oferece para realizarmos opera��es de entrada e sa�da
	1) cin "stream de entrada padr�o"
		">>" operador de extra��o pra realizar a leitura de dados
	2) cout "stream de sa�da padr�o"
		"<<" utilizamos a opera��o de inser��o pra realizar prints
			"\n" quebra de linha
			"endl" quebra de linha e esvazia o buffer (obriga escrever os dados de imediato)
			"\" + caracteres especiais para dar print por exemplo I\�m === I�m		
	3) cerr "stream de erro padr�o (sa�da)"
	4) clog "stream de logging padr�o (sa�da)"
	*/
	
	cout << "example \n" << a << "4\\ever" << endl; //cout working
	cin >> b >> c; //cin working
	return 0;
};
