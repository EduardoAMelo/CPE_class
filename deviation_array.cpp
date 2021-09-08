//Arrays are used to store a lot of information
/* float, int ... notas [100] indica tamanho do array

nota [0] = 100
a = nota [0]
a -> 100

*/

//tomar cuidado em escolher a position das atribuições pois o array pode acabar invadindo variaveis alheias
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	float nota[100], media = 0, standard_deviation = 0;
	int n, i;
	
	cout << "Numero de alunos: ";
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "Nota do aluno " << i + 1 << ": ";
		cin >> nota[i];
	}
	
	for (i = 0; i < n; i++)
		media = media + nota[i];
	media /= n;
	
	for (i = 0; i < n; i++)
		standard_deviation = standard_deviation + (nota[i] - media)	* (nota[i] - media);
	standard_deviation = sqrt(standard_deviation / n);
	
	cout << "Nota media = " << setprecision(1) << fixed
		 << media << "\nStandard deviation = " << standard_deviation << endl;
	return 0;
}

