#include <iostream>
using namespace std;
void menu();
void menu2();
string producto;
string envio;

int main(){
menu();
menu2();
cout << "\nEl producto seleccionado es: " << producto << endl;
cout << "\nEl tipo de envio seleccionado es: " << envio << endl;
return 0;}

void menu(){
	int opcion;
cout << "			Menu de prodctos: ";
cout << "\nOpcion 1: Simple ";
cout << "\nOpcion 2: Medio ";
cout << "\nOpcion 3: Calidad ";
cout << "\nOpcion 4: Premium ";
cout << "\n\nIngrese la opcion que va a elegir: ";
cin >> opcion;
switch(opcion){
	case 1: 
      producto = "Simple";
      break;
    case 2: 
    	producto = "Medio";
      	break;
    case 3:  producto = "Calidad";
    	break;
    case 4:  producto = "Premium";
    	break;
    
}} 

	
void menu2(){
	int opcion;
	cout << "\n		Menu de tipo de envios: ";
	cout << "\n 1) Normal ";
	cout << "\n 2) Express ";
	cout << "\n 3) Fast Delivery ";
	cout << "\n\nIngrese la opcion de tipo de envio: "; cin >> opcion;
	switch(opcion){
		case 1: 
    envio = "Normal";
    break;
    	case 2: 
    envio = "Express";
    break;
    	case 3: 
	envio = "Fast Delivery";
    break;}}
    	




