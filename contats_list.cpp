/******************************
Computacao para Engenharia - CPE
Exercício de Assimilação de Conceitos
Prof. Daniel Guerreiro e Silva

Complete o codigo
*******************************/
#include <iostream>
#include <string>
#define MAX_AGENDA 50

using namespace std;

struct Contato{
	string nome;
	int telefone;
	};

//funcao que busca nome na agenda e retorna numero de telefone
//se nao encontrar o nome, retorna -1
int buscaNumero(Contato lista[], int n, string nome){
	for(int i = 0; i < n; i++) {
		if(lista[i].nome == nome)// achou
		 	return lista[i].telefone;
	}
	return -1;
}
//procedimento que recebe lista vazia de Contato e preenche
//com nome e telefone lidos um-a-um da entrada padrao
void leiaContatos(Contato lista[], int n) {
	for(int i = 0; i < n; i++) {
		cout << "Nome Contato " << i + 1 << ": " ;
		cin >> lista[i].nome;
		cout << "Telefone Contato " << i + 1 << ": " ;
		cin >> lista[i].telefone;
	}
	
}

int main(){

	Contato lista[MAX_AGENDA];
	int n, num;
	string buscar;

	cout << "Quantos contatos vai gravar? ";
	cin >> n; //leitura do numero de contatos a ser incluso na agenda

	leiaContatos(lista, n);

	cout << "Digite o nome a pesquisar ou s para sair: ";
	cin >> buscar; //leitura do nome a ser procurado na agenda
	while(buscar!="s"){
		num = buscaNumero(lista, n, buscar);
		if(num == -1)
			cout << "Nao encontrado";
		else
			cout << num << endl;
		cin >> buscar; //continuando o while
	}

	return 0;
}
