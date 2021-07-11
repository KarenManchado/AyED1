#include <iostream>
#include <conio.h>
using namespace std;
double cambio(double&, int&);

int main(){
	int pesos;
	double dolares = 0;
	cout << "Ingrese la cantidad de pesos a converti: " ;
	cin >> pesos;
	cambio(dolares,pesos);
	cout << "\nLa cantidad de dolares es: " << dolares << endl;
	getch();
	return 0;
}

double cambio(double& x, int& y){
	x = (y /90.71);
return x;
}
