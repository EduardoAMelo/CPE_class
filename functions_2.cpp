//functions2
/* 
 => Main funcion
		Is a special function that get invoked automaticaly with the system;
		The return says if the program worked or not;


*/
#include <iostream>

using namespace std;

//declaring
int sum(int a, int b);

//works as well
int main () {
	int a = 0, b = 5;
	cout << sum(a, b) << "\n";
	
	return 0;
}

//definition
int sum (int a, int b) {
	return (a + b);
}
