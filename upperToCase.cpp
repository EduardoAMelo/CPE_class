#include <iostream>
#include <string>

using namespace std;

int main() {
	int i = 0;
	string text;
	char mod;
	
	getline(cin, text);
	
	for(size_t a = 0; a < text.size(); a++) {
		mod = text[a];
		i = 0;
		if(((int)mod > 64) && ((int)mod < 90)) {
			while(i < 32){
				(int)mod++;
				i++;
			}
			text[a] = mod;
			cout << text[a];
		} else {
			if(((int)mod > 96) && ((int)mod < 122)) {
				while(i < 32){
					(int)mod--;
					i++;
				}
				text[a] = mod;
				cout << text[a];
			} else {
				cout << text[a];
			}
		}
	}
	return 0;
}
