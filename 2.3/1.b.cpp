#include <iostream>
using namespace std;
int main(){
	float laboratorio, teorica, practica, nota_final = 0;
	cout << "Ingrese la nota del laboratorio: "; cin >> laboratorio;
	cout << "Ingrese la nota de la teoria: "; cin >> teorica;
	cout << "Ingrese la nota de la practica: "; cin >> practica;
	laboratorio *= 0.30;
	teorica *= 0.60;
	practica *= 0.10;
	nota_final = laboratorio + teorica + practica;
	cout << "\nLa nota final es de: " << nota_final;
	return 0;
}
