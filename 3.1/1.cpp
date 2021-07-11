#include <iostream>
#include <conio.h>
using namespace std;
enum plato_entrada{ensalada = 1, papas, picada, nada = 0};
enum plato_principal{pasta =1, lasagna, caya, nada1 = 0};
enum postre{chocotorta =1, brownie, helado, nada2=0};

int main(){

//Datos de la comanda
string nombre;
int h, min, nromesa, dia, mes = 3, ano = 2021;
cout << "Ingrese el numero de mesa: "; cin>> nromesa;
cout << "Ingrese la hora: "; cin >> h;
cout << "Ingrese los minutos: "; cin >> min;
cout << "Ingrese el dia: "; cin >> dia;
cout << "Ingrese nombre del mozo: "; cin >> nombre; 

// cantidad de comensales
int cant_comensales;
cout << "Ingrese la cantidad de comensales en la mesa: "; 
	cin>> cant_comensales;

//comanda
cout << "\nComanda: ";
cout << "Numero de mesa: " << nromesa;
cout << "Hora: " << h <<":" << min << endl;
cout << "Fecha:" << dia << "/" << mes << "/" << ano << endl;
cout << "Nombre del mozo: " << nombre << endl;
cout << "Cantidad de comensales: " << cant_comensales << endl;
 

// ciclo para hacer el pedido

for(int i=1; i <=cant_comensales; i++){
int pr, e, p;
string ent, prin, pos;
	cout << "\nIngrese el codigo de entrada: "; cin >> e;
	cout << "Ingrese el codigo de plato principal: "; cin >> pr;
	cout << "Ingrese el codigo de postre: "; cin >> p;
    
    switch(e){
		case ensalada: ent = "ensalada"; break;
		case papas: ent = "papas"; break;
		case picada: ent= "picada"; break;
		case nada: ent= "nulo"; break;
	}
	switch(pr){
		case pasta: prin = "pasta"; break;
		case lasagna: prin = "lasagna"; break;
		case caya: prin= "caya"; break;
		case nada1: prin = "nulo"; break;
	} 
	switch(p){
		case chocotorta: pos = "chocotorta"; break;
		case brownie: pos = "brownie"; break;
		case helado: pos= "helado"; break;
		case nada2: pos= "pos"; break;
	}
	cout << "\n Comensal " << i << endl;
	 cout << "Entrada: " << ent << endl;
	 cout << "Plato principal: " << prin << endl;
cout << "Postre: " << pos << endl;}
	
	
	
	getch();
	return 0;}
 
 
