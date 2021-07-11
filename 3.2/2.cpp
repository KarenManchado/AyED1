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
	string frase;
	archivo.open("frasesDeBjarme.txt",ios::in);
	if(archivo.fail()){
	cout << "No se pudo abrir el archivo";
	exit(1);	
	}
while(!archivo.eof()){
		getline(archivo,frase);
cout << frase << "\n";
	}
	archivo.close();
	
	}
