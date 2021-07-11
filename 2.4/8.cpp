#include <iostream>
using namespace std;
int main(){
	double n, suma = 0;
while(n >= 0){
	cout << "Ingrese un numero: "; cin >> n;
	if (n >= 0){
		suma = suma + n;
	}
}	
 cout << "La suma es de: " << suma << endl;
 return 0;}
