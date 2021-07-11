#include <iostream>
 using namespace std;


 const int dim = 10;

 void cargarMatriz(int dimension);
 void mostrarMatriz(int matriz[dim][dim],int dimension);
 void sumarMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension);
 void restarMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension);
 void multiMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension);
 void trasponerMatriz(int matriz[dim][dim],int dimension);
 void Silla(int m[dim][dim],int dimension);


 int main()
 {
     int n;
     cout << "Determine la dimension de la matriz: ";
     cin >> n;
     cargarMatriz(n);

     return 0;
 }

 void cargarMatriz(int dimension)
 {
     int M[dim][dim], fila, columna, opcion,opcion1;
     int M1[dim][dim];

     for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++)
        {
            cout << "Ingrese la posicion A["<< i << "]" << "[" << j << "] ";
            cin >> fila;
            M[i][j] = fila;
        }
     }

     for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++)
        {
            cout << "Ingrese la posicion B["<< i << "]" << "[" << j << "] ";
            cin >> fila;
            M1[i][j] = fila;
        }
     }
      while(opcion !=0){
cout << "\n\nMenu de operaciones de Matrices " << endl;
cout << "\n1. Suma de matrices" << endl;
cout << "\n2. Resta de matrices" << endl;
cout << "\n3. Multiplicacion de matrices" << endl;
cout << "\n4. Trasponer la matrices" << endl;
cout << "\n5. Pustos de silla de la matriz" << endl;
cout << "\n0. Salir del programa " << endl;
cout << "\nIngrese la opcion: ";
cin >> opcion;
switch(opcion){
case 1: sumarMatriz(M,M1,dimension); break;
case 2: restarMatriz(M,M1,dimension); break;
case 3: multiMatriz(M,M1,dimension);break;
case 4:
trasponerMatriz(M,dimension);
 trasponerMatriz(M1,dimension); break;
case 5: Silla(M,dimension);
Silla(M1,dimension); break;
case 0: break;
}
 }}



 void mostrarMatriz(int matriz[dim][dim],int dimension)
 {
     for(int i = 0; i < dimension; i++) {
        cout << "{" << " ";
        for(int j = 0; j < dimension; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout <<" " << "}" << endl;
    }
 }

void sumarMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension)
{
    int R[dim][dim];

    for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++)
        {
            R[i][j] = (matriz[i][j]+matriz1[i][j]);
        }
    }

    cout << "El resultado de la suma de sus matrices es: " << endl;
    mostrarMatriz(R,dimension);

}

void restarMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension)
{
    int R[dim][dim];

    for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++)
        {
            R[i][j] = (matriz[i][j]- matriz1[i][j]);
        }
    }

    cout << "El resultado de la resta de sus matrices es: " << endl;
    mostrarMatriz(R,dimension);
}

void multiMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension)
{
    int R[dim][dim];

    for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++)
        {

                R[i][j] = (matriz[i][j]*matriz1[i][j]);
            }
        }

    cout << "El resultado del producto de sus matrices es: " << endl;
    mostrarMatriz(R,dimension);
}

void trasponerMatriz(int matriz[dim][dim], int dimension)
{
    int R[dim][dim];
    for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++) {
           R[j][i] = matriz[i][j];
        }
    }
   cout << "La matriz traspuesta es: " << endl;
    mostrarMatriz(R,dimension);
}

void Silla(int m[dim][dim],int dimension){
    int Maxfilas[dimension], maximo;
    int Mincolumnas[dimension];
    for(int i=0;i<dimension;i++){
        for(int j=0;j<dimension;j++){
                if(m[i][j]>Maxfilas[0]){
                    maximo =m[i][j];

                }
                if(m[i][j]< Mincolumnas[0]){
                    Mincolumnas[j] = m[i][j];
                }

        }
    }
 for(int i=0;i<dimension;i++){
        for(int j=0;j<dimension;j++){
                if(Maxfilas[i]== Mincolumnas[j]){
                    cout << "El punto de silla es: " << i << "," << j << endl;
                }
                else { cout << "No tiene punto de silla  " << endl;
}}}}
