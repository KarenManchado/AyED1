#include <iostream>
using namespace std;
int main(){
	float y2, y1, x2, x1, resultado = 0;
	cout << "Ingrese el valor de y2: "; cin >> y2;
	cout << "Ingrese el valor de y1: "; cin >> y1;
	cout << "Ingrese el valor de x2: "; cin >> x2;
	cout << "Ingrese el valor de x1: "; cin >> x1;

resultado = (y2 - y1)/(x2 - x1);
cout << "\nEl resultado es: " << resultado;	
	return 0;
}
