#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
	
	double base, altura, area, perimetro, diagonal;
	
	cout << "Base do retangulo: ";
	cin >> base;
	
	cout << "Altura do retangulo: ";
	cin >> altura; 
	
	area = base*altura;
	perimetro = 2*base + 2*altura;
	diagonal = sqrt(base*base + altura*altura);
	
	cout << endl;
	cout << fixed << setprecision(4);
	cout << "AREA = " << area << endl;
	cout << "PERIMETRO = " << perimetro << endl;
	cout << "DIAGONAL = " << diagonal << endl;
}
