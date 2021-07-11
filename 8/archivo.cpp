#include <fstream>
#include "archivo.h"

void cargararchivo(tLista &lista){
	ifstream archivo;
	archivo.open("alumnos.txt",ios::in);
	if(archivo.is_open()){
		while(!archivo.eof())
		{
		archivo >> lista.elementos[lista.contador].nombre;
		archivo.get();
		archivo >> lista.elementos[lista.contador].apellido;
		archivo.get();
		archivo >> lista.elementos[lista.contador].carrera;
		archivo >> lista.elementos[lista.contador].anio;
		if((!lista.elementos[lista.contador].nombre.empty())&&(!lista.elementos[lista.contador].apellido.empty())&&(!lista.elementos[lista.contador].carrera.empty())&&(lista.elementos[lista.contador].anio != 0)){
			lista.contador++;
		}
	}
} archivo.close();}

void guardararchivo(tLista &lista){
	ofstream garchivo;
	garchivo.open("alumnos.txt", ios::out);
	if(garchivo.is_open()){
		for(int i=0;i<lista.contador;i++){
		 garchivo << lista.elementos[i].nombre << " " << lista.elementos[i].apellido << " " << lista.elementos[i].carrera << " "<<lista.elementos[i].anio << endl;
		}
		}
garchivo.close();}
