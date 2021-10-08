#include <iostream>
using namespace std;

//responde true se for n quad. perfeito, false c.c.
bool quadp(int n) {
	int i;
    bool v;
    
	i = 1;
	v = false;
	while (i <= n/2 && v == false) {
		if (i * i == n)//teste
		  	v = true;
		i++;
	}
	return v;
}

//responde true se n for cubo. perfeito, false c.c
bool cubop(int n) {
	int i;
    bool v;
    
	i = 1;
	v = false;
	while (i <= n/2 && v == false) {
		if (i * i * i == n)//teste
		  	v = true;
		i++;
	}
	return v;
	
}


int main() {
  int op, n;

  do {

    cout << "1 - Quadrado perfeito\n";
    cout << "2 - Cubo perfeito\n";
    cout << "3 - Sair\n";
    cout << "Digite sua opcao: ";

    cin >> op;

    switch (op) {
	    case 1: //testa se n e quadrado perfeito
	    	cout << "n: ";
	    	cin >> n;
	      	if(quadp(n))
	      		cout << "O numero " << n << " e um quadrado perfeito.\n";
	      	else
	      		cout << "O numero " << n << " nao e um quadrado perfeito.\n";
	      	break;
	      	
	    case 2: //testa se n e cubo perfeito
	    	cout << "n: ";
	      	cin >> n;
	      	if(cubop(n))
	      		cout << "O numero " << n << " e um cubo perfeito.\n";
	      	else
	      		cout << "O numero " << n << " nao e um cubo perfeito.\n";
	      	break;
	      	
	    case 3:
	      break; //sair: comando break que encerra aqui o comando switch
	      
	    default:
	      cout << "Opcao invalida.\n";
    }
  } while (op != 3); //repete enquanto nao digitar 4

  return 0;
}
