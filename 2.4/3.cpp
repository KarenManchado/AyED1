#include <iostream>
using namespace std;

int main(){
int promedio = 0, suma = 0, n1, n2, n3;
cout << "Ingrese la primera nota: "; cin >> n1;
cout << "Ingrese la segunda nota: "; cin >> n2;
cout << "Ingrese la tercera nota: "; cin >> n3;
suma = n1 + n2 + n3;
promedio = (suma / 3);
if(promedio >= 7){
	cout << "Aprobo " << endl;
}
else { 
cout << "Desaprobado " << endl;
}	
return 0;}
