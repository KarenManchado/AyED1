#include <iostream>
using namespace std;
void diferencia();
int main(){
	diferencia();
return 0;}

void diferencia(){
	int x, y, resultado;
	cout << "Ingrese el valor de x: "; cin >> x;
	cout << "Ingrese el valor de y: "; cin >> y;
	resultado = x - y;
	if ( resultado <= 10){
		for(int i = y; i<= x; i++){
			cout << "\n" << i;
		}
	} else {
		cout << "La diferencia de "  << x << " e " << y << " es: " << resultado; 
	}
}
