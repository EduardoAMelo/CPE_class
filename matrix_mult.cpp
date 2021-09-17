#include <iostream>

using namespace std;
int main() {
	int i = 0, j = 0 , matrix [100][100], m = 0, n = 0, matrix2 [100][100], matrix3 [100][100];
	
	cin >> i >> j >> m >> n;
	if (j != m){
		cout << "ERRO!";
	} else {
	//creating the matrix
		for(int a = 0; a < i; a++) {
			for(int b = 0; b < j; b++) {
				cin >> matrix [a][b];
			}
		}
		for(int a = 0; a < m; a++) {
			for(int b = 0; b < n; b++) {
				cin >> matrix2 [a][b];
			}
		}
		
	for(int a = 0; a < i; ++a)
        for(int b = 0; b < n; ++b){
            matrix3[a][b]=0;
        }
	
	//multiplication
		for(int a = 0; a < i; ++a){
        	for(int b = 0; b < n; ++b){
            	for(int k = 0; k < j; ++k){
                	matrix3[a][b] += matrix[a][k] * matrix2[k][b];
            	}
			}
		}
	//print	
		for (int a = 0; a < i; a++) {
			for (int b = 0; b < n; b++)
				cout << matrix3 [a] [b] << " ";
	  		cout << endl;
		}
	}
	
	return 0;
}
