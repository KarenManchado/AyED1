
#include <iostream>
#include "listas.cpp"
#include "archivo.cpp"
 using namespace std;

int main(){
	tLista lista;
	int opcion;
	string nombre1,nombre2,alumno1,apellido1;
	lista.contador = 0;
	cargararchivo(lista);

	do {
	cout << "\nMenu: ";
	cout << "\n 1. Añadir un nuevo alumno: ";
	cout << "\n2. Eliminar un alumno: ";
	cout << "\n3. Buscar un alumno: ";
	cout << "\n4. Listados de alumnos: ";
	cout << "\n5. Ordenar la lista de forma ascendente";
	cout << "\n6. Ordenar la lista de forma descente";
	cout << "\n0. guardar cambios y terminar: ";
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
		case 3: cout << "Ingrese el nombre del alumno a buscar: "; cin >> alumno1;
		cout << "Ingrese el apellido del alumno: "; cin >> apellido1;
		buscar_alumno(lista,alumno1,apellido1);
		break;
		case 4: mostraralumnos(lista);
		break;
		case 5: ordenarlista(lista); break;
		case 6: ordenardes(lista); break;
		case 0: guardararchivo(lista);
		break;
		default: cout << "Opcion incorrecta" << endl;
		break;
	}}while (opcion != 0);
return 0;
}

