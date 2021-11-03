#include <iostream>
#include <cmath>
#include <iomanip>
#define MAXPOINTS 1024

using namespace std;

struct Ponto { /*struct que especifica um ponto */
        double x;
        double y;
};

struct Curva { /* pontos consecutivos sao interligados por segmentos de reta. */
        Ponto pt[MAXPOINTS];
        int npts;
};

//leitura dos pontos
void readCurve(Curva& c){
	cin >> c.npts;
	for(int i = 0; i < c.npts; i++){
		cin >> c.pt[i].x >> c.pt[i].y;
	}
	
}

//calculo ponto de gravidade x,y
Ponto gravity(Curva c){
	int i;
	double div; //uso double pq senão da erro de precisão
	Ponto sum;
	
	//sum_x e y iguais a 0 para evitar que a soma tenha números soltos de outro programa
	sum.x = 0;
	sum.y = 0;
	div = 1.0/c.npts;
	
	for(i = 0; i < c.npts; i++)
		sum.x += c.pt[i].x;
	sum.x *= div;
	
	for(i = 0; i < c.npts; i++)
		sum.y += c.pt[i].y;
	sum.y *= div;
	
	return sum;
}

//calculo do comprimento
double length(Curva c){
	double len = 0;
	
	for(int i = 0; i < c.npts - 1; i++){
		len += sqrt(pow((c.pt[i+1].x - c.pt[i].x), 2) + pow((c.pt[i+1].y - c.pt[i].y), 2));
	}
	
	return len;
}



int main(){
Curva c;
Ponto grav_center;
double curv_length;

//chamando as funções
readCurve(c);

curv_length = length(c);

grav_center = gravity(c);

//prints
cout << setprecision(2) << fixed;
cout << "Centro de Gravidade: (" <<grav_center.x << ", " << grav_center.y <<")" << endl;
cout << "Comprimento: " << curv_length;

return 0;
}

