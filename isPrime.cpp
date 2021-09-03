#include <iostream>
using namespace std;

int main() {
	int var_holder, i, a;
	
	cin >> var_holder;
	while ((var_holder < 0) != true) {
		if ((var_holder == 0) || (var_holder == 1) || (var_holder == 2)) {
			a = var_holder;
			switch(a) {
				case 0:
					cout << "nao primo\n";
					break;
				case 1:
					cout << "nao primo\n";
					break;
				case 2:
					cout << "primo\n";
					break;
			}
			cin >> var_holder;
				
		} else {
			for (i = 2; i < var_holder; i++) {
			if((var_holder % i) == 0){
				cout << "nao primo\n";
				break;
			}
			if(i == (var_holder - 1)) {
				cout << "primo\n";
				break;
			}	
		}
		cin >> var_holder;
			
		}
	}

	return 0;
}
