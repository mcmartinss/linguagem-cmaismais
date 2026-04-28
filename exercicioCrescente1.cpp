#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	int x, y;
	
	cout << "Digite dois numeros: ";
	cin >> x >> y;
	
	while(x!=y){
		if(x<y){
			cout << "CRESCENTE" << endl;
		} else {
			cout << "DECRESCENTE!" << endl;
		}
	cout << "Digite  outros dois numeros: ";
	cin >> x >> y;
	}
	
return 0;

}
