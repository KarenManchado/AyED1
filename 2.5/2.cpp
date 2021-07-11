#include <iostream>
#include <conio.h>
using namespace std;
void al_cuadrado(int x, int y);

int main(){
	int n, pot;
	cout << "Ingrese el numero a elevar: ";
	cin >> n;
	while(pot<=0){
	cout << "Ingrese una potencia positiva: ";
	cin >> pot;}
	
	al_cuadrado(n,pot);
	
	getch();
	return 0;
}

void al_cuadrado(int x, int y){
	int resultado=1;
	for(int i=1;i<=y;i++){
		resultado= resultado*x;
	}
	cout << x << " elevado al " << y << "= " << resultado << endl; 
}
