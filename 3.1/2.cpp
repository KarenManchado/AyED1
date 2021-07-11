#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
enum destino{BHI= 1, AEP, EPA, EZE, BRC, CTC, CRD};
enum clase{primera = 1, bussiness, economica};

int main(){
	int dest, cla, dni, org;
	string apellido, nombre, origen, Destino, c;
	cout << "Ingrese su apellido: "; cin >> apellido;
	cout << "Ingrese su nombre: "; cin >> nombre;
	cout << "Ingrese su numero de dni: "; cin >> dni;
	cout << "Ingrese el codigo de clase: "; cin >> cla;
	cout << "Ingrese el codigo de Aeropuerto de origen: "; cin >> org;
	cout << "Ingrese el codigo de Aeropuerto de destino: "; cin >> dest;
switch(cla){
	case primera: c = "Primera"; break;
	case bussiness: c = "Bussiness"; break;
	case economica: c = "Economica"; break; 
}
switch(org){
	case BHI: origen = "Bahia Blanca"; break;
	case AEP: origen = "Buenos Aires aeroparque"; break;
	case EPA: origen = "Buenos Aires palomar"; break;
	case EZE: origen = "Buenos Aires Ezeiza"; break;
	case BRC: origen = "San Carlos de Bariloche"; break;
	case CTC: origen = "San Fernando del Valle de Catamarca"; break;
	case CRD: origen = "Comodoro Rivadavia"; break;
}

switch(dest){
	case BHI: Destino = "Bahia Blanca"; break;
	case AEP: Destino = "Buenos Aires aeroparque"; break;
	case EPA: Destino = "Buenos Aires palomar"; break;
	case EZE: Destino = "Buenos Aires Ezeiza"; break;
	case BRC: Destino = "San Carlos de Bariloche"; break;
	case CTC: Destino = "San Fernando del Valle de Catamarca"; break;
	case CRD: Destino = "Comodoro Rivadavia"; break;
}	

cout << "\n\n PASAJE DE AVION " << endl;
cout << "Nombre y apellido del pasajero: " << apellido << " " << nombre << endl;
cout << "Dni: " << dni << endl;
cout << "Clase: " << c << endl;
cout << "Origen: " << origen << endl;
cout << "Destino: " << Destino << endl;
 }
