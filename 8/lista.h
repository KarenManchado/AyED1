#ifndef lista_H
#define lista_H
#include <string>
using namespace std; 
const int MAX =100;
//estructura de cada alumno
 typedef struct {
string nombre;
string apellido;
string carrera;
int anio;
}tAlumno;

//array de alumnos
typedef tAlumno tArray[MAX];
//lista de alumnos
typedef struct{
	tArray elementos;
	int contador;
}tLista;
// verifica si hay lugar en la lista y agrega
void agregar_alumno(tLista &lista);

// elimina un alumno
void eliminar_Alumno(tLista &lista, string nombre,string apellido);

//muestra lista de alumnos 
void mostraralumnos(tLista &lista);

//busca en la lista el alumno
void buscar_alumno(tLista &lista, string alumno1,string apellido1);

bool operator>(tAlumno opIzq, tAlumno opDer);
bool operator<(tAlumno opIzq, tAlumno opDer);
void ordenarlista(tLista &lista);
void ordenardes(tLista &lista);
#endif
