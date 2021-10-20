#include <iostream>
using namespace std;

void fibonacci(int holdArray[], int order);



int main() {
	int order;
	cin >> order;
	
	while(order >= 0) {
		int holdArray[order + 1];
		fibonacci(holdArray, order);
		cin >> order;	
	}
	
		
	return 0;
}

void fibonacci(int holdArray[], int order) {
	
	holdArray[0] = 0;
	holdArray[1] = 1;
	
	for(int i = 2 ; i < order + 1; i++) {
		holdArray[i] = holdArray[i - 1] + holdArray[i - 2];
	}
	
	cout << "F(" << order << ") = " << holdArray[order] << endl;
}
