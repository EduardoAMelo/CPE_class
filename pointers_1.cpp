//Pointers
/*
	int *var_pointer = &normal_var
		armazena o endereço de variaveis
		1- trocar o valor de uma variavel não muda seu endereço
		2- trocar o escopo muda o seu enderço
		3- ** e utilizado para armazenar pointer de pointer
	
	É interessante dizer que a variável pointer possui o seu proprio endereço e no seu conteudo possui o endereço da outra variavel
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
