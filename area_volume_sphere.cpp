#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	double raio, pi = 3.14, area, volume;
	
	cin >> raio;
	
	area = 4 * pi * raio * raio;
	volume = ( 4 * pi * raio * raio * raio) / 3;
	
	cout << "area = ";
	cout << setprecision(3) << fixed;
	cout << setprecision(0) << area << ", ";
	cout << setprecision(3) << area << endl;
	
    cout << "volume = ";
    cout << setprecision(0) << volume << ", ";
    cout << setprecision(3) << volume;
	
	return 0;
}
