//as vezes a atribuição de variáveis fica muito longe do while então usamos o for que nos permite fazer a atribuição dentro dele
//para loops de fim determinado


//'enquanto usuario não digitar enter' usa while pois é indeterminado

/*

for (inicio ; condição ; passo){
	comando;
}
*/
#include <iostream>

using namespace std;

int main() {
	int i, n, impar;
	
//print de numeros impares	
	for(i = 0, impar = 1 ; i < 10  ; i++, impar += 2) {
		cout << impar << endl;
	}
	return 0;
} 
