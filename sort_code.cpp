#include <iostream>
using namespace std;

void insertion_sort (int holdArr[], int aux);
int read_matrix (int holdArr[]);
void print_num (int holdArr[]);


//sort

int main() {
	int holdArr[100];
	int aux;
	
	aux = read_matrix(holdArr);
	insertion_sort (holdArr, aux);
	print_num(holdArr);
	
	return 0;
}

int read_matrix (int holdArr[]) {
	int i, j = 0;
	
	cin >> i;
	while(i >= 0) {
		holdArr[j] = i;
		j++;
		cin >> i;
	}
	
	return j;
}


void insertion_sort (int holdArr[], int aux) {
	int i, j, k, holder;
	
	for(i = 1; i < aux; i++) {
	    holder = holdArr[i];
	    //algoritmo de ordenacao insertion-sort
	    for(j = i-1; (j >= 0) && (holder > holdArr[j]); j--)
	      holdArr[j + 1] = holdArr[j];
	    holdArr[j + 1] = holder;
	}
	
}

void print_num (int holdArr[]){
	int i;
	
	cin >> i;
	cout << holdArr[i - 1];	
}








