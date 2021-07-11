#include <iostream>
#include <fstream>
using namespace std;
const int MaxProductos = 15;

typedef struct{
int cod;
double precio;
int cant_unidades;}tProducto;
typedef tProducto tArray[MaxProductos];
int i=0;

typedef struct{
    tArray elementos;
    int contador;
}tLista;

void abrir_listado(tLista &lista);
void guardar_listado(tLista &lista);
void maxproducto(tLista &lista);
void eliproducto(int id,tLista &lista);
void agregar_producto(tLista &lista);
void mostrar_productos(tLista &lista);

int main(){
    tLista lista;
    int opcion, id;
    lista.contador = 0;
    abrir_listado(lista);
    do{
        cout << "\n\nMenu: " << endl;
        cout << "\n1. Agregar un producto " << endl;
        cout << "\n2. Listado de productos almacenados" << endl;
        cout << "\n3.Encontrar el producto con maximo valor en el almacen " << endl;
        cout << "\n4. Eliminar un producto " << endl;
        cout << "\n0. guardar cambios y terminar" << endl;
        cout << "\nIngrese la opcion: ";
        cin >> opcion;
       switch(opcion){
       case 1: agregar_producto(lista); break;
       case 2: mostrar_productos(lista); break;
       case 3: maxproducto(lista); break;
       case 4: cout << "\nIngrese el id del producto a eliminar: ";
       cin >> id;
       eliproducto(id,lista); break;
       case 0: guardar_listado(lista);
       break;
       default: cout << "\nIngrese la opcion correcta";  }
    }while(opcion != 0);
    return 0;
}

void abrir_listado(tLista &lista){
ifstream archivo;
archivo.open("listado_productos.txt", ios::in);
if(archivo.is_open()){
    while(!archivo.eof()){
    archivo >> lista.elementos[lista.contador].cod;
    archivo.get();
    archivo >> lista.elementos[lista.contador].precio;
    archivo.get();
    archivo >> lista.elementos[lista.contador].cant_unidades;
    archivo.get();
     if ((lista.elementos[lista.contador].cod != 0 )&&(lista.elementos[lista.contador].precio != 0)&&(lista.elementos[lista.contador].cant_unidades != 0)){
        lista.contador=(lista.contador+1);
     }
    }
}
archivo.close();
}

void mostrar_productos(tLista &lista){
cout << "\nLa lista actual de productos: ";
if(lista.contador > 1){
for(int i =0; i<lista.contador;i++){
     cout << "\n";
    cout << lista.elementos[i].cod << " " << lista.elementos[i].precio << " " << lista.elementos[i].cant_unidades;
}} else {
 cout << "\nno se ingreseo ningun producto aun";}
}

void agregar_producto(tLista &lista){
    fflush(stdin);
if(lista.contador < MaxProductos){
    cout << "Ingrese el codigo del producto: ";
    cin >> lista.elementos[lista.contador].cod;
    cout << "Ingrese el precio del producto: ";
    cin >> lista.elementos[lista.contador].precio;
    cout << "Ingrese la cantdad de unidades que hay en el almacen: ";
    cin >> lista.elementos[lista.contador].cant_unidades;
lista.contador = (lista.contador+1);}
else {
    cout << "En el almacen no hay capacidad para agregar un nuevo producto ";
}
}

void guardar_listado(tLista &lista){
ofstream archivo;
archivo.open("listado_productos.txt", ios:: out);
if(archivo.is_open()){
   for(int i=0;i<lista.contador;i++){
   archivo << "\n" << lista.elementos[i].cod << " " << lista.elementos[i].precio << " " << lista.elementos[i].cant_unidades;
   }
   archivo.close();
   cout << "Archivo guardado";
}}

void eliproducto(int id,tLista &lista){  //
int pos;
for(int i =0; i<lista.contador;i++){
    if(lista.elementos[i].cod == id){
       pos = i;
    for(int i = pos; i < lista.contador;i++){
        lista.elementos[i] = lista.elementos[i+1];
    }
    lista.contador = (lista.contador -1);
    cout << "El Producto ha sido eliminadoo correctamente";
    }
    }
    }
void maxproducto(tLista &lista){
    int maximo = 0, id_maximo =0, calculo= 0;
    for(int i =0; i <lista.contador;i++){
        if((lista.elementos[i].cant_unidades * lista.elementos[i].precio) > maximo){
           id_maximo = lista.elementos[i].cod;
            maximo = (lista.elementos[i].cant_unidades * lista.elementos[i].precio);
        }
    }
cout << "\nEl maximo valor en almacen es: " << maximo << endl;
cout << "Corresponde al id de producto: " << id_maximo << endl;
}
