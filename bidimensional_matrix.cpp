//Matrix
/*
int matriz [4] [5]; 
Rows = 4
Collums = 5

*/
#include <iostream>
using namespace std;

int main() {
	int matriz [2] [2];
	int i, j;
	
	//leitura
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << "Matriz[" << i << "][" << j << "]: ";
			cin >> matriz [i] [j];
		}
	}
	
	//escrita
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)
			cout << matriz [i] [j];
  		cout << endl;
   }
	return 0;
}
