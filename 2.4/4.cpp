#include <iostream>
using namespace std;

int main(){
double n, suma = 0, promedio = 0, ing = 0;
cout << "Ingrese un numero: "; cin >> n;
suma = suma + n;
ing = ing + 1;
cout << "Ingreso: " << n;
while(n!= 99){
	cout << "Ingrese otro numero: "; cin >> n;
	if(n != 99){
		cout << "Ingreso: " << n << endl;
		suma = suma + 1;
		ing = ing +1;
	}
}
promedio = (suma / ing);
cout << "El promedio es de: " << promedio << endl;
return 0; 
}
