#include <iostream>

using namespace std; //retira a necessidade de colocar std::

int main() {
	//declaração de variáveis
	int a, b, c;
	
	/*
	Podemos utilizar indicadores antes da declaração de variáveis int, 'char' e float, por exemplo:
	1) 'short' diminui os bits (int) por exemplo 'short int'.
	2) 'unsigned' aumenta as possibilidades de números positivos e zera os negativos (int, char).
	3) 'long' aumenta o número de bits em certos sistemas que diminuem o número de bytes disponivel para a variável, por serem menos potentes em harware (int).
	4) 'double' utiliza 64bits, sendo 1 para o 'sinal', 11 para o 'expoente' e 52 para a 'mantissa' (float) 'quando precisar de precisão em floats'.
    */
    
    /*
    O endereço de uma variável:
    1) não temos controle sobre a alocação do endereço de uma variável, porém podemos saber onde ela está localizada com o comando '&x' onde x é uma variável qualquer.
    2) podemos pegar o endereço e inserir em outras variáveis, as quais são apelidadas de 'ponteiros ou apontadores'.
    3) para criar uma variável ponteiro é necessário usar '*' , por exemplo 'int *addr' que guarda o endereço de variáveis inteiras.
    */
    
    //Notação cientifica em c++ é feita usando a letra 'e' por exemplo 2e2 === 2x10^2 = 200.0 (usado em float!!!).
    
    /*
    Aspas:
    1) 'simples' para strings comuns 'hello'.
    2) "duplas" para "Hello World".
    */
    
    /*
    1) soma === '+'
    2) sub === '-'
    3) mult === '*'
    4) divisão === '/'
    5) resto === '%'
    6) inverter sinal 'a = -b'
    7) incremento e decremento '++' e '--' onde c++ é diferente de ++c na hora de dar print por exemplo no c++ tem que printar 2x pra aparecer os dois valores (antigo e novo).
    8) a = a + b === a += b e funciona com todos os outros, tirando as operações de incremento e decremento.
    
    Ordem de importância:
    1) '*' e '/'
    2) '%'
    3) '+' e '-'
    */
    
    /*
	conversão de tipo
    1) int a; short int b; a = b
    2) int a; a = (int) ((float)b) a variável b se torna uma float aq dentro e logo depois o (int) transforma o resultado em int, CUIDADO não modifica a variável em scopo global.
    */
    
    //'>>' leitura, '<<' print
	 
    cout << "Digite o primeiro termo";
    cin >> a;
    
    cout << "digite o segundo termo";
    cin >> b;
    
    c = (a + b) / 2;
    cout << "A medida e:" << c << endl;
    
    return 0;
    
}

