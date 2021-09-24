#include <iostream>
#include <string>

using namespace std;

int count(string s, char c) {
	int counter = 0;
	for(int a = 0; a < s.size(); a++) {
		if(s[a] == c) {
			counter++;
		}
	}
	return counter;
}

int main () {
	string my_str;
	char my_chr;
	int reciever;
	
	cout << "Digite a frase: ";
	getline(cin, my_str);
	
	cout << "Digite o char: ";
	cin >> my_chr;
	
	reciever = count(my_str, my_chr);
	
	cout << "A letra " << " apareceu: " << reciever << endl;
	
	return 0;
}
