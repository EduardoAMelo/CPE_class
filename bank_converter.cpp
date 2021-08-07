#include <iostream>


using namespace std;

int main() {
	int nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, moeda_1, moeda_050, moeda_025, moeda_010, moeda_005, moeda_001;
	double a;
	cin >> a;
	
	a*= 100;
	
	nota_100 = a / 10000;	
	a -= nota_100 * 10000;
	
	nota_50 = a/5000;
	a -= nota_50 * 5000;
	
	nota_20 = a/2000;
	a -= nota_20 * 2000;
	
	nota_10 = a/1000;
	a -= nota_10 * 1000;
	 
	nota_5 = a/500;
	a -= nota_5 * 500;
	
	nota_2 = a/200;
	a -= nota_2 * 200;
	
	moeda_1 = a / 100;	
	a -= moeda_1 * 100;

	moeda_050 = a / 50;	
	a -= moeda_050 * 50;
	
	moeda_025 =  a / 25;	
	a -= moeda_025 * 25;
	
	moeda_010 = a / 10;	
	a -= moeda_010 * 10;
	
	moeda_005 = a / 5;	
	a -= moeda_005 * 5;

	
	moeda_001 = a;
	
	
	
	
	
	cout << nota_100 << " nota(s) de R$100" << endl;
	cout << nota_50  << " nota(s) de R$50" << endl;
	cout << nota_20 << " nota(s) de R$20" << endl;
	cout << nota_10 << " nota(s) de R$10" << endl;
	cout << nota_5 << " nota(s) de R$5" << endl;
	cout << nota_2 << " nota(s) de R$2" << endl;
	cout << moeda_1 << " moeda(s) de R$1" << endl;
	cout << moeda_050 << " moeda(s) de R$0,50" << endl;
	cout << moeda_025 << " moeda(s) de R$0,25" << endl;
	cout << moeda_010 << " moeda(s) de R$0,10" << endl;
	cout << moeda_005 << " moeda(s) de R$0,05" << endl;
	cout << moeda_001 << " moeda(s) de R$0,01" << endl;
	
	return 0;
}
