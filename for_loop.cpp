//as vezes a atribui��o de vari�veis fica muito longe do while ent�o usamos o for que nos permite fazer a atribui��o dentro dele
//para loops de fim determinado


//'enquanto usuario n�o digitar enter' usa while pois � indeterminado

/*

for (inicio ; condi��o ; passo){
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
