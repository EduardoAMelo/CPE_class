#include <iostream>
#include <iomanip>
using namespace std;

double potencia(double a, int b);
double raiz_quadrada(double x);
double pi(int n);
double fatorial(int n);
double euler(int n);

int main() {
	int select, b, n;
	double a, x;
	
	
	do {
		cin >> select;
		
		switch(select) {
			case 0:
				cin >> a >> b;
				cout << setprecision(8) << fixed;
				cout << potencia(a, b) << endl;
				break;
			case 1:
				cin >> x;
				cout << setprecision(8) << fixed;
				cout << raiz_quadrada(x) << endl;
				break;
			case 2:
				cin >> n;
				cout << setprecision(8) << fixed;
				cout << pi(n) << endl;
				break;
			case 3:
				cin >> n;
				cout << setprecision(0) << fixed;
				cout << fatorial(n) << endl;
				break;
			case 4:
				cin >> n;
				cout << setprecision(8) << fixed;
				cout << euler(n) << endl;
				break;
			case 5:
				break;
			default:
				cout << "Opcao invalida.\n";
		}
		
	} while (select != 5);
	
	return 0;
	
}

double potencia(double a, int b) {
	double mat[b], ret = a;
	
	
	if (b == 0){
		return 1;
		
	} else {
		for (int i = 0; i < b; i++) {
			mat[i] = a;
		}
		for (int j = 1; j < b; j++) {
			ret *= mat[j];
		}			
	}
	return ret;		
}

double raiz_quadrada(double x) {
	double r, media, r2, stops;
	
	r = 1;
	media = x/r;
	r = (media + r)/2;
	if(x == 0)
		return 0;
	else{
		do{
			media = (x/r);
			r2 = r;
			r = (media + r)/2;
			stops = r - r2;
			if(stops < 0)
				stops *= -1;
			if(stops <= (1/10000))
				stops = -1;
		}while(stops != -1);
	
		return r;	
		
	}		
}

double pi(int n) {
	double ret = 0;
	
	if(n == 0)
		ret += 1 / potencia(16, 0) * (4/1.0 - 2/4.0 - 1/5.0 - 1/6.0);	
	for(double i = 0; i < n; i++){
		ret += 1 / potencia(16, i) * (4/(8*i + 1) - 2/(8*i + 4) - 1/(8*i + 5) - 1/(8*i + 6));
	}
	
	return ret;	
}

double fatorial(int n) {
	double mat[n], ret = n;
	
	if(n == 0){
		ret = 1;	
	} else {
		for(int i = n-1; i >= 1; i--){
			mat[i] = i;	
		}
		for(int j = 1; j < n; j ++){
			ret *= mat[j];
		}
	}
	
	return ret;
	
}

double euler(int n) {
	double mat[n], ret = 1;
		
	for(int i = 1; i < n; i++) {
		mat[i] = 1/fatorial(i);
	}
	for(int j = 0; j < n; j++){
		ret += mat[j];
	}
	
	
	return ret;
}













