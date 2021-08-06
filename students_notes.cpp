/*
1- usar um cout pedindo o nome do aluno seguido de um cin
2- usar um cout e um cin para pedir cada prova/trabalho (2 provas e 3 trabalhos)
3- Variaveis float
	prova_1 = 0,75 * 2 * prova_1
	prova_2 = 0,75 * 3 * prova_2
	trabalho 1, 2 ,3 = os valores respectivos
	trabalhos = 0,25 * (soma dos trabalhos 1,2 e 3)
	sum = prova_1 + prova_2 + prova_3 + trabalhos
4- Variável string
	aluno = cin do aluno
5- cout com fixed(1)
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
	string aluno;
	float prova_1, prova_2, trabalhos, sum, trabalho_1, trabalho_2, trabalho_3;
	
	cout << "Informe o nome do aluno: ";
	cin >> aluno;
	
	cout << "Resultados das Prova 1 e Prova 2: ";
	cin >> prova_1 >> prova_2;
	
	prova_1 = 0.75 * 2 * prova_1;
	prova_2 = 0.75 * 3 * prova_2;
	
	cout << " Digite a nota dos 3 trabalhos: ";
	cin >> trabalho_1 >> trabalho_2 >> trabalho_3;
	trabalhos = 0.25 * (trabalho_1 + trabalho_2 + trabalho_3);  
	
	sum = (prova_1 + prova_2)/5 + trabalhos/3;
	
	cout << setprecision(1) << fixed;
	cout << aluno << ": " << sum;
	
	return 0;
}

