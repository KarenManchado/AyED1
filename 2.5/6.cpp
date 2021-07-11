#include <iostream>
#include <conio.h>
using namespace std;

void intercambio(int&, int&);

int main(){
	int n1, n2;
	cout << "Ingrese dos valores: ";
	cin >> n1 >> n2;
	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;
	intercambio(n1,n2);
	getch();
	return 0;
}

void intercambio(int& x, int& y){
	int aux;
	aux = x;
	x = y;
	y = aux;
	cout << "\nEl nuevo valor de n1 es: " << x << endl;
	cout << "El nuevo valor de n2 es: " << y << endl; 
}

