#include <iostream>
#include <conio.h>
using namespace std;
double cm_in(double&);
double  c_f(double&);
double libras_kg(double&);

int main(){
	int opcion;
	double centimetros, celsius, libras;
cout << "	Opciones de conversion: ";
cout << "\nOpcion 1: centímetros a pulgadas ";
cout << "\nOpcion 2: Celsius a Farenheit";
cout << "\nOpcion 3: libras a kilogramos: ";

cout << "\nIngrese la opcion que quieres utilizar: ";
cin >> opcion;

while(opcion != 0){

switch(opcion){
	case 1: {
	cout << "Ingrese los centimetros a convertir: "; cin >> centimetros;
	cout << centimetros<< " centimetros son: " << cm_in(centimetros) << " pulgadas" << endl;
	cout << "Ingrese 0 para salir del programa, o alguna de las otras opciones: ";
	cin >> opcion;
    break;}
	case 2: {
	cout << "Ingrese los grados Celsius a convertir: "; cin >> celsius;
	cout << celsius << " grados celsius son: " << c_f(celsius) << " grados Farenheit" << endl;
	cout << "Ingrese 0 para salir del programa, o alguna de las otras opciones: ";
	cin >> opcion;
    break;}
	case 3: {
	cout << "Ingrese los Libras a convertir: "; cin >> libras;
	cout << libras << " libras son: "  << libras_kg(libras) << " kilogramos" << endl;
	cout << "Ingrese 0 para salir del programa, o alguna de las otras opciones: ";
	cin >> opcion;
    break;}
     default: {
     cout << "Ingrese una opcion correcta: " ; cin >> opcion; 
     break;
	}
	}}
return 0;}
double cm_in(double& centimetros){
	double libra;
	libra = (centimetros / 2.54);
	  
return libra;}

double c_f(double& celsius){
double f;
f = ((celsius * (9/5))+32);
return f; }

double libras_kg(double& libras){
double kg;
kg = (libras/2.205);
return kg;} 

