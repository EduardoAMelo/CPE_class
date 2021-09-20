//functions
#include <iostream>
using namespace std;

/* type name ( type parameter1 , type parameter2 , ..., type parameterN) {
.
.
.
return 'return value'; stop the execution
}

The parameters are local scope
*/

int sum (int a, int b) {
	int r;
	
	r = a + b;
	
	return r;
}
 
int main () {
	int c, d;
	
	cin >> c >> d;
	
	//Can use variables
	cout << "Sum: " << sum(c, d) << endl;
	
	//or arguments
	cout << "Sum2: " << sum(5, 10) << endl;
	
	return 0;
}
 
