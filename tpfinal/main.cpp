#include <iostream>
#include "abstract.h"
#include "mammal.h"
#include "oviparous.h"

using namespace std;

int main(){
	int opcion, menu;
	const int N=5;
	int cont=0;
	animal*arrayanimal[N];
	
	do{
		cout << "\nMenu de opciones: " << endl;
		cout << "1. Ingresar un animal a la lista" << endl;
		cout << "2. Comer" << endl;
		cout << "3. Dormir" << endl;
		cout << "4. layeggs o nurse" << endl;
		cout << "0. Salida" << endl;
		cout << "\n Ingrese la opcion: ";
		cin >> opcion;
		
		switch(opcion){	
			
			case 1:{
			 if(cont<=5){
			cout <<"\n Menu de animales en el Zoo" << endl;
			cout << "\n		Oviparos: " << endl;
			cout << "1. Cocodrilos" << endl;
			cout << "2. Gansos" << endl;
			cout << "3. Pelicanos" << endl;
			cout << "\n		Mamiferos: " << endl;
			cout << "4. Murcielago" << endl;
			cout << "5. Ballenas" << endl;
			cout << "6. Leon marino" << endl;
			cout << "\n Ingrese la opcion: ";
			cin >> menu;
			cin.ignore();
			switch(menu){
					case 1:
				arrayanimal[cont]= new crocodile();
				arrayanimal[cont] -> setname();
				arrayanimal[cont] -> setcode(menu); 
				cont++;	
				break;
					case 2: 
				 arrayanimal[cont] = new goose();
				 arrayanimal[cont] -> setname();
				 arrayanimal[cont] -> setcode(menu);
				 cont++; break;
				 	case 3: arrayanimal[cont] = new pelican();
				 arrayanimal[cont] -> setname();
				 arrayanimal[cont] -> setcode(menu);
				 cont++;
				 break;
				 	case 4: arrayanimal[cont] = new bat;
				 arrayanimal[cont] -> setname();
				 arrayanimal[cont] -> setcode(menu);
				 cont++;
				 break;
				 	case 5: arrayanimal[cont] = new whale;
				 arrayanimal[cont] -> setname();
				 arrayanimal[cont] -> setcode(menu);
				 cont++;
				 break;
				 	case 6: arrayanimal[cont] = new sealion;
				 arrayanimal[cont] -> setname();
				 arrayanimal[cont] -> setcode(menu);
				 cont++;
				 break;
				 	default: cout << "Error al ingresar una opcion: " << endl;
				 break;
		     } }else{ cout << "El zoologico esta lleno de animales" << endl;
				} break; }
		
		case 2:{
			if(cont>0){
			 for(int i=0;i<cont;i++){
			 	cout << "\n";
			 cout << "Animal: " << i+1 << endl;
			 arrayanimal[i] -> tipo();
			 cout << "Nombre del animal: ";
			 arrayanimal[i] -> getname();
			 cout << endl;
			 arrayanimal[i] -> comer();
			 cout << endl;
			 }}else{
			 cout << "Nose a ingresado ningun animal" << endl;} break;}
		
		case 3: {
		if(cont>0){
		for(int i=0; i<cont;i++){
			cout << "\n";
			cout << "Animal: " << i+1 <<  endl;
		    arrayanimal[i] -> tipo();
		    cout << "Nombre del animal: ";
		    arrayanimal[i] -> getname();
		    cout << endl;
		    arrayanimal[i] -> dormir();
		    cout << endl;
		}} else{ cout << "Nose ah ingresado ningun animal" << endl;
		}break;}
		
		case 4: {
			if(cont>0){
			for(int i=0;i<cont;i++){
				cout << "\n";
			cout << "Animal: " << i+1 << endl;
			arrayanimal[i] -> tipo();
			cout << "Nombre del animal: ";
			arrayanimal[i] -> getname();
			cout << endl;
			arrayanimal[i] -> breed();
		}} else { cout << "Nose ah ingresado ningun animal" << endl;
		}break;}
		
		case 0:{
		 cout << "El programa se esta cerrando..." << endl;
		 break;}
		 
		default: cout << "Error al ingresar la opcion, por favor ingrese de nuevo" << endl;
		break;
	
	}}while(opcion!=0);
	
for(int i=0;i<N;i++){
	delete arrayanimal[i];
}

	return 0;
}
