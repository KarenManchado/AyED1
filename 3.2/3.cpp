#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void frases();

int main(){
	frases();
	
	system("pause");
	return 0;
}

void frases(){
	ifstream archivo;
	string cadena, aux = " ";
	int largo;
	char caracter;
	archivo.open("frasesDeBjarme.txt",ios::in);
	if(archivo.fail()){
	cout << "No se pudo abrir el archivo";
	exit(1);	
	}
	
while(!archivo.eof()){
archivo >> cadena;
archivo.get(caracter);
if(cadena.length()>aux.length()){
	aux = cadena;
	largo = int(cadena.length());
}
}
cout << "La palabra mas larga es: " << aux << endl;
archivo.close();}
