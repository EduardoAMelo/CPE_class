#include <iostream>

using namespace std;

int main() {
	double user_input, total, media;
	int counter;
	counter = 0;
	total = 0;
	
	cin >> user_input;
	
	//loop
	while(user_input != -1) {
		total += user_input;
		counter += 1;
		cin >> user_input;	
	} 
	
	//print area
	if (counter > 0) {
		media = total / counter;
		cout << "Media = " << media;	
	}
	
	return 0;


}
