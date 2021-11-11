#include <iostream>
#include <clocale>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	fstream fr, fw;
	char mod;
	string s, concatenate = "";
	int charNum = 0, tok = 0, phrase = 0, t_corr = 0;
	setlocale(LC_ALL,"");
		
	if (argc < 2) {
		cout << "Numero minimo de argumentos nao respeitado";
		return 1;
	}
	
	//abertura dos arquivos
	fr.open(argv[1],ios::in);
	
	if(!fr.is_open()) {
		cerr << "Erro";
		return 1;
	}
	
	//concatenacao para criar um arquivo com o modelo "analise_nome_do_arquivo.txt"
	concatenate = argv[1];
	concatenate = "analise_" + concatenate;
	
	//esse .c_str é para evitar erro com o fato de .open estar esperando um "char *" e não uma string
	fw.open(concatenate.c_str() , ios::out | ios::trunc);
	
	if(!fw.is_open()) {
		cerr << "Erro";
		return 2;
	}
	
	//Logica para fazer as contas
	while(getline(fr, s)) {
		for(size_t a = 0; a < s.size(); a++){
			mod = s[a];
		
			if(mod != ' ') {
				charNum++;
			}
			
			if(mod == ' ') {
				tok++;
			}
			
			if(((int)mod == 46) || ((int)mod == 33) || ((int)mod == 63) ) {
				phrase++;
			}
		}
		
		//Logica para corrigir um problema de não leitura da uma palavra de uma linha
		if(s == "")
			continue; //caso tenha uma linha vazia ele ignora
		else
			t_corr++;
	}
	
	//escrevendo no arquivo
	fw <<"# Caracteres = " << charNum << "\n";
	fw <<"# Tokens = " << tok + t_corr << "\n";
	fw <<"# Frases = " << phrase;
	
	//fechando os arquivos	
	fw.close();
	fr.close();
	
	return 0;
	
}
