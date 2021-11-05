/******************************
Computacao para Engenharia - CPE
Exerc√≠cio de Assimila√ß√£o de Conceitos
Prof. Daniel Guerreiro e Silva

Complete o codigo
*******************************/
#include <iostream>
#include <string>
#define MAX_AGENDA 50
#include <fstream>

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
void leiaContatos(Contato lista[], int& n) {
	ifstream arquivo;
	
	arquivo.open("agenda.txt");
	if(arquivo.is_open() == false) {
		cerr << "Erro na abertura de aquivo!!\n";
		return;
	}
	
	n = 0;
	while(arquivo >> lista[n].nome && n < MAX_AGENDA) {
		arquivo >> lista[n].telefone;
		n++;
	}
	
	arquivo.close();
	
}

void adicionaContato(Contato lista[], int& n){
	if(n == MAX_AGENDA){
		cerr << "Erro: limite de contato atingido!\n";
		return;
	}
	cout << "Digite o nome: ";
	cin >> lista[n].nome;
	cout << "Digite o numero: ";
	cin >> lista[n].telefone;
	n++;
}

void save(Contato lista[], int n){
	ofstream arquivo;
	
	arquivo.open("agenda.txt", ios::trunc);
	if(arquivo.is_open() == false) {
		cerr << "Erro na abertura de aquivo!!\n";
		return;
	}
	
	for(int i  = 0; i < n; i++){
		arquivo << lista[i].nome << "\n";
		arquivo << lista[i].telefone << "\n";
	}
	
	arquivo.close();
}

int main(){

	Contato lista[MAX_AGENDA];
	int n, num;
	string buscar;
	char operacao;


	leiaContatos(lista, n);
	

	cout << "Digite p para pesquisar, a para adicionar ou s para sair: ";
	cin >> operacao; //leitura do nome a ser procurado na agenda
	
	while(operacao!='s'){
		if(operacao == 'p'){
			cout << "Digite o nome a pesquisar: ";
			cin >> buscar;
			num = buscaNumero(lista, n, buscar);
			
			if(num < 0 )
				cout << "Nao encontrado\n";
			else
				cout << num << endl;
		} else if(operacao == 'a') {
			adicionaContato(lista, n);
		} else {
			cout << "OperaÁ„o invalida\n";
		}
		
		cout << "Digite p para pesquisar, a para adicionar ou s para sair: ";
		cin >> operacao; //continuando o while
	}
	
	save(lista, n);

	return 0;
}
