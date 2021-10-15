//Pointers
/*
	int *var_pointer = &normal_var
		armazena o endere�o de variaveis
		1- trocar o valor de uma variavel n�o muda seu endere�o
		2- trocar o escopo muda o seu ender�o
		3- ** e utilizado para armazenar pointer de pointer
	
	� interessante dizer que a vari�vel pointer possui o seu proprio endere�o e no seu conteudo possui o endere�o da outra variavel
*/
#include <iostream>
using namespace std;

int main() {
	
	int x = 100;
	int *x_point;
	
	x_point = &x;
	
	//podemos mudar o valor da variavel usando o pointer
	*x_point = 200;
	
	cout << x_point << endl;
	cout << x << endl;
}
