#include <iostream>
#include "lista.h"
void agregar_alumno(tLista &lista){
 if(lista.contador < MAX){
 		fflush(stdin);
 		cout << "\nIngrese el nombre del alumno: ";
 		getline(cin,lista.elementos[lista.contador].nombre);
 		cout << "Ingrese el apellido: ";
 		getline(cin,lista.elementos[lista.contador].apellido);
 		cout << "Ingrese la carrera: ";
 		getline(cin,lista.elementos[lista.contador].carrera);
 		cout << "Ingrese el año que esta cursando: ";
 		cin >> lista.elementos[lista.contador].anio;
 		lista.contador =(lista.contador + 1);
 	} else {
 		cout << "Llego el limite de ingreso de alumnos" << endl;
 	}}

void eliminar_Alumno(tLista &lista, string nombre1,string nombre2){
	int pos = 0;
	for(int i =0; i <MAX;i++){
		if((lista.elementos[i].nombre == nombre1)&&(lista.elementos[i].apellido == nombre2)){
			pos = i;
			for(i=pos;i<lista.contador-1;i++){
			lista.elementos[i] = lista.elementos[i+1];}
		lista.contador = lista.contador -1;
		cout << "Alumno eliminado de la lista";
	}}
}



void mostraralumnos(tLista &lista){

cout << "\nListado de alumnos";
for(int i=0;i<lista.contador;i++){
	cout << "\n";
	cout << "Nombre: " << lista.elementos[i].nombre << endl;
    cout  << "Apellido: " << lista.elementos[i].apellido << endl;
    cout  << "Carrera: " << lista.elementos[i].carrera << endl;
    cout << "Anio: " << lista.elementos[i].anio << endl;
}}
void buscar_alumno(tLista &lista, string alumno1,string apellido1){
int pos =0;
bool buscado= false;
for(int i =0;i<lista.contador;i++){
    if((lista.elementos[i].nombre == alumno1)&&(lista.elementos[i].apellido == apellido1)){
       cout << "El alumno se necuentra en la posicion: " << i << endl;
       cout << " " << endl;
       buscado = true;
       }}
       if(!buscado){
        cout << "El alumno no se ha encontrado " << endl;
        cout << " ";
       }

}

void ordenarlista(tLista &lista){
tAlumno temp;
for(int i=0;i<lista.contador;i++){
        for(int j=0;j<lista.contador -1; j++){
            if(lista.elementos[j]>lista.elementos[j+1]){
                temp =lista.elementos[j];
                lista.elementos[j]=lista.elementos[j+1];
                lista.elementos[j+1]= temp;
                }
        }}
        mostraralumnos(lista);
}

void ordenardes(tLista &lista){
tAlumno temp;
for(int i=0;i<lista.contador;i++){
    for(int j=0;j<lista.contador-1;j++){
            if(lista.elementos[j]<lista.elementos[j+1]){
        temp = lista.elementos[j];
        lista.elementos[j] =lista.elementos[j+1];
        lista.elementos[j+1]=temp;
    }}} mostraralumnos(lista);
}
bool operator>(tAlumno opIzq, tAlumno opDer)
{
    return(opIzq.nombre > opDer.nombre);
}

bool operator<(tAlumno opIzq, tAlumno opDer)
{
    return(opIzq.nombre < opDer.nombre);
}

