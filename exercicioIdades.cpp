#include<iomanip>
#include<iostream>

using namespace std;

int main(){
	
	string nome1, nome2;
	int idade1, idade2;
	double media;
	
	cout << "Dados da primeira pessoa: " << endl;
	cout << "Nome: ";
	cin >> nome1;
	cout << "Idade: " <<endl;
	cin >> idade1;
	
	cout << "Dados da segunda pessoa: ";
	cout << "Nome: ";
	cin >> nome2;
	cout << "Idade: ";
	cin >> idade2;
	
	media = (double)(idade1+idade2)/2;
	
	cout << fixed << setprecision(1);
	cout << "A idade media de " << nome1 << " e " << nome2 << " eh de " << media << " anos " << endl;
}
