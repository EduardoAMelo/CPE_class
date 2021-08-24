#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double a, b, c, delta, x1, x2, i_holder, i_holder_2;
	int tipo;
	
	cin >> a >> b >> c;
	
	delta = (b * b) - 4 * a * c;
	
	if (delta == 0) {
		tipo = 3;
	} else {
		if (delta > 0) {
			tipo = 1;
		} else {
			tipo = 2;
		}
	}
	
	cout << setprecision(2) << fixed;
	switch(tipo) {
		case 1:
			x1 = ((-b) + sqrt(delta)) / (2 * a);
			x2 = ((-b) - sqrt(delta)) / (2 * a);
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
			break;
		case 2:
			x1 = (-b) / (2 * a);
			x2 = (-b) / (2 * a);
			i_holder = sqrt((-delta)) / (2 * a);
			i_holder_2 = sqrt((-delta)) / (2 * a);
			cout << "x1 = " << x1 << " + " << i_holder <<"i\n";
			cout << "x2 = " << x1 << " - " << i_holder_2 <<"i\n";
			break;
		default:
			x1 = (-b) / (2 * a);
			x2 = (-b) / (2 * a);
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
			break;
	}
	
	return 0;
}
