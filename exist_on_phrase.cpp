#include <iostream>
#include <string>

using namespace std;

int main() {
	string frase;
	int word_holder = 0, special_holder = 0;
	
	getline(cin, frase);
	
	for(size_t i = 0; i < frase.size(); i++) {
		if(frase[i] == ' ') {
			word_holder++;
		}
		if(frase[i] == '.' || frase[i] == ',' || frase[i] == '!' || frase[i] == ';' || frase[i] == '?') {
			special_holder++;
		}
	}
	cout << "Words: "<< word_holder + 1 << endl << "Special strings: "<< special_holder;
	
	
	
	return 0;
}
