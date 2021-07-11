#include <iostream>
#include <conio.h>
using namespace std;
void despliegue(int);
int main(){
	int n;
	cout << "Ingrese un numero: ";
	cin >> n;
	despliegue(n);
	getch();
	return 0; 
}


void despliegue(int x){
	cout << "EL valor ingresado es: " << x << endl;
}
