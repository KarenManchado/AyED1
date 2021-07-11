#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float s, l, w, a, b, c, vc = 0, vr = 0, vt = 0;
	cout << "Ingrese la longitud del cuadrado: "; cin >> s;
	cout << "Ingrese la longitud del rectangulo: "; cin >> l;
	cout << "ingrese el ancho del rectangulo: "; cin >> w;
	cout << "Ingrese el valor de a en el triangulo: "; cin >> a;
	cout << "Ingrese el valor de b en el triangulo: "; cin >> b;
	cout << "Ingrese el valor de c en el triangulo: "; cin >> c;
	
	vc = 4 * s;
	vr = (2*l) + (2*w);
	vt = a + b + c;

cout << "\nEl volumen del cuadrado es: " << vc << endl;
cout << "\nEl volumen del rectangulo es: " << vr << endl;
cout << "\nEl volumen del triangulo es: " << vt << endl;
	return 0;
} 
