//Looping Commands
/*
while: enquanto o condição for 'true' ele executa os comandos.
do...while: sempre vai rodar pelo menos uma vez. 
*/

#include <iostream>

using namespace std;

int main() {
	int dividendo, divisor, numero1, numero2;
	int conta, x, y, r;
	
	//divisão com soma e subtração
	cout << "dividendo e divisor: ";
	cin >> dividendo >> divisor;
	
	conta = 0;
	
	//SE FALSO NÃO EXECUTA NUNCA!!!
	while(dividendo >= divisor) {
		conta++;
		dividendo = dividendo - divisor;
	}
	cout << "Resultado: " << conta
		 << "\nResto: " << dividendo << endl;
		 
		 
	//MDC	 
	cout << "primeiro e segundo numero: ";	 
	cin >> numero1 >> numero2;
	
	if(numero1 >= numero2) {
		x = numero1;
		y = numero2;
	} else {
		x = numero2;
		y = numero1;
	}
	cout << "x\ty\tr\n";
	
	//EXECUTA PELO MENOS UMA VEZ!!	 
	do {
		r = x % y;
		cout << x << '\t' << y << '\t' << r << endl;
		x = y;
		y = r;
	} while (r != 0);
	
	cout << "\nMDC entre " << numero1 << " e " << numero2 << " = " << x;
 	
	
	
	return 0;
}
