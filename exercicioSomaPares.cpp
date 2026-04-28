#include <iostream>

using namespace std;

int main(){
	
	int x, y, troca, soma;
	
	cout << "Digite dois numeros: ";
	cin >> x >> y;
	
	if(x>y){
		troca = x;
		x = y;
		y = troca;
	}
	
	soma = 0;
	for(int i=x+1; i<y; i++){
		if (x%2 == 0){
			soma++;
		}	
	}
	
	cout << "SOMA PARES = " << soma << endl;
	
return 0;

}
