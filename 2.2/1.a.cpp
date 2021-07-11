#include <iostream>
using namespace std;
int main(){
	int dia = 0, ano = 0, edad = 0;
	  char mes[10];
	  cout << "Ingrese el dia de su nacimiento: ";
	  cin >> dia;
	  cout << "Ingrese el mes: ";
	  cin >> mes; 
	  cout << "Ingrese su ano de nacimiento: ";
	  cin >> ano;
	  edad = 2021 - ano;
cout << "Su edad: " << edad;  
	
	return 0;
}
