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
	ofstream archivo;
	string frase;
	archivo.open("frasesDeBjarme.txt",ios::out);
	if(archivo.fail()){
	cout << "No se pudo abrir el archivo";
	exit(1);	
	}
while(frase != "fin"){
cout << "Ingrese una frase de Bjarme o ingrese fin para terminar: "; getline(cin,frase);
if(frase != "fin"){
	archivo <<"\n" << frase;
}}
archivo.close();
}
