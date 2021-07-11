#include <iostream>
using namespace std;

int main(){
	int cant_horas = 0, sueldototal = 0, cant_extras = 0, subtotal = 0; 
	cout << "Ingrese la cantidad de horas trabajadas en la semana: ";
	cin >> cant_horas;
	while(cant_horas <= 0){
		cout << "Error, ingrese la cantidad de horas positivas: ";
		cin >> cant_horas;}

if(cant_horas <= 40){
	sueldototal = cant_horas * 200;
	cout << "El sueldo de este mes es de: " << sueldototal << endl;
}	else {
cant_extras = (cant_horas - 40);
subtotal = (cant_extras * 250);	
sueldototal =((subtotal) + ( 40 *200));
cout << "El sueldo total de este mes es de: " << sueldototal << endl;
}
return 0;
}
