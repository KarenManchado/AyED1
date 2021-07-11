#include <iostream>
#include <cstdio>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;
const int MAX = 50;
typedef struct {
string nombre;
string apellido;
string Dni;
int edad;
int nota;
}tAlumno;

typedef tAlumno tArray[MAX];
typedef struct{
	tArray elementos;
	int contador;
}tLista;

void cargararchivo(tLista &lista);
void guardararchivo(tLista &lista);
void agregar_alumno(tLista &lista);
void eliminar_Alumno(tLista &lista, string nombre,string apellido);
void calificar(tLista &lista);
void mostrarnotas_alumnos(tLista lista);



int main(){
	tLista lista;
	int opcion;
	string nombre1,nombre2;
	lista.contador = 0;
	cargararchivo(lista);
	do {
	cout << "\nMenu: ";
	cout << "\n 1. Añadir un nuevo alumno: ";
	cout << "\n2. Eliminar un alumno: ";
	cout << "\n3. Calificamos los estudiantes: ";
	cout << "\n4. Listados de notas, identificando las mayor y la media: ";
	cout << "\n0. Fin del programa: ";
	cout << "\n\n Ingrese la opcion correspondiente: ";
	cin >> opcion;
	switch(opcion){
		case 1: agregar_alumno(lista);
		break;
		case 2: 
		cout << "Ingrese el nombre del alumno: ";
		cin >> nombre1;
		cout << "Ingrese su apellido: ";
		cin >> nombre2;
		eliminar_Alumno(lista,nombre1,nombre2);
		break;
		case 3: calificar(lista);
		break;
		case 4: mostrarnotas_alumnos(lista);
		break;
		case 0: guardararchivo(lista);
		break;
		default: cout << "Opcion incorrecta" << endl;
		break;
	}}while (opcion != 0);
return 0;
}

void cargararchivo(tLista &lista){
	ifstream archivo;
	archivo.open("AyED.txt",ios::in);
	if(archivo.is_open()){
		while(!archivo.eof())
		{
		archivo >> lista.elementos[lista.contador].nombre;
		archivo.get();
		archivo >> lista.elementos[lista.contador].apellido;
		archivo.get();
		archivo >> lista.elementos[lista.contador].Dni;
		archivo >> lista.elementos[lista.contador].edad;
		archivo >> lista.elementos[lista.contador].nota;
		if((!lista.elementos[lista.contador].nombre.empty())&&(!lista.elementos[lista.contador].apellido.empty())&&(!lista.elementos[lista.contador].Dni.empty())&&(lista.elementos[lista.contador].edad != 0)&&(lista.elementos[lista.contador].nota >= 0)){
			lista.contador++;
		}
	}
} archivo.close();}

void guardararchivo(tLista &lista){
	ofstream garchivo;
	garchivo.open("AyED.txt", ios::out);
	if(garchivo.is_open()){
		for(int i=0;i<lista.contador;i++){
		 garchivo << lista.elementos[i].nombre << " " << lista.elementos[i].apellido << " " << lista.elementos[i].Dni << " " << lista.elementos[i].edad << " " << lista.elementos[i].nota << endl;
		}
		}
garchivo.close();}

 void agregar_alumno(tLista &lista){
 	if(lista.contador < MAX){
 		fflush(stdin);
 		cout << "\nIngrese el nombre del alumno: ";
 		getline(cin,lista.elementos[lista.contador].nombre);
 		cout << "Ingrese el apellido: ";
 		getline(cin,lista.elementos[lista.contador].apellido);
 		cout << "Ingrese el dni: ";
 		getline(cin,lista.elementos[lista.contador].Dni);
 		cout << "Ingrese su edad: ";
 		cin >> lista.elementos[lista.contador].edad;
 		lista.contador =(lista.contador + 1);
 	} else {
 		cout << "Llego el limite de ingreso de alumnos" << endl;
 	}
 }

void eliminar_Alumno(tLista &lista, string nombre,string apellido){
	int pos = 0;
	for(int i =0; i <MAX;i++){
		if(lista.elementos[i].nombre == nombre){
			pos = i;
			for(i=pos;i<lista.contador-1;i++){
			lista.elementos[i] = lista.elementos[i+1];}
		lista.contador = lista.contador -1;
		cout << "Alumno eliminado de la lista";
	}}
}

void calificar(tLista &lista){
	int nota;
for(int i =0; i<lista.contador;i++){
cout << "\nNombre del alumno: " << lista.elementos[i].nombre << endl;
cout << "Apellido del alumno: " << lista.elementos[i].apellido << endl;
cout << "Ingrese la nota del alumno: ";
cin >> nota;
if ((nota>=1)&&(nota<=10)){
lista.elementos[i].nota = nota;
}else {
	cout << "Error, reingrese de nuevo la nota de:" << lista.elementos[i].nombre << " " << lista.elementos[i].apellido << endl;
	cin >> nota;
	lista.elementos[i].nota = nota;
}
}}

void mostrarnotas_alumnos(tLista lista){
double media =0;
double alto = 0, suma = 0;
int pos = 0, total;
cout << "\nListado de alumnos";
for(int i=0;i<lista.contador;i++){
	cout << "\n";
	cout << lista.elementos[i].nombre << " " << lista.elementos[i].apellido << ": " << lista.elementos[i].nota;
if(lista.elementos[i].nota > alto){
alto = lista.elementos[i].nota;
pos = i;	
}suma = suma + lista.elementos[i].nota;	
total = i;	}

media = (suma / total);
cout << "\n\nEl alumno con la nota mas alta es de: " << lista.elementos[pos].nombre << " " << lista.elementos[pos].apellido << endl;
cout << "\nSu nota es: " << lista.elementos[pos].nota;
cout << "\nLa nota media es: " << media << endl; 
}
