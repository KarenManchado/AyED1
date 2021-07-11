#include <iostream>
using namespace std;

int main(){
	int numero, suma = 0;
	cout << "Ingrese un numero: "; cin >> numero;
	while(numero <= 0){
		cout << "Error, Ingrese un nuvo valor de n: ";
		cin >> numero;
	}
for (int i=1;i<=numero; i++){
suma = suma +i;	
}
cout << "La suma es de: "<< suma << endl;
return 0;
}
