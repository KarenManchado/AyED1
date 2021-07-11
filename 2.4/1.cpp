#include <iostream>
using namespace std;

int main(){
	int cantprod = 0, total = 0, totalcompra = 0;
	cout << "Ingrese la cantidad de productos que se compra: ";
	cin >> cantprod;
total = cantprod * 80;
while (cantprod <= 0){
cout << "Ingrese la cantidad de productos en forma de positivo: ";
cin >> cantprod;	
}
if(cantprod > 10 and cantprod <= 20){
totalcompra = (total * 0.88);
cout << "El costo total de la compra es: " << totalcompra << endl;	
} else if (cantprod > 20 and cantprod <= 30){
	totalcompra = (total * 0.75);
cout << "El costo total es de: " << totalcompra << endl;	
} else {
	totalcompra = (total * 0.6);
	cout << "El costo total de la compra es de: " << totalcompra << endl;
	
}
return 0; }
