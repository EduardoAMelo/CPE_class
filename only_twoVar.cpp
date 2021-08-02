#include <iostream>
using namespace std;

int main() {
	int primeiro, segundo;
	cout << "Digite o primeiro termo: ";
	cin >> primeiro;
	
	cout << "Digite o segundo termo: ";
	cin >> segundo;
	
	primeiro += segundo;
	segundo = primeiro - segundo; 
	primeiro -= segundo;
	cout << "Primeiro: " << primeiro << endl;
	cout << "Segundo: " << segundo;
	
	return 0;
}
