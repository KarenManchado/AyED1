#include <iostream>
#include <conio.h>
using namespace std;

void mult(float,float);

int main(){
	float n1, n2;

cout << "Ingrese los 2 numeros a multiplicar: ";
cin>>n1>>n2;
mult(n1,n2);

getch();
return 0;
}

void mult(float x, float y){
	float resultado;
	resultado = x * y;
	
	cout << "El resultado es: " << resultado << endl;
}
