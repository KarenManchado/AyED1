#include <iostream>
#include <conio.h>
using namespace std;

void Duplicar(int&,int&);

int main(){
	int a =120, b = 35;
cout << "\nEl valor de a es: " << a << endl;
cout << "El valor de b es: " << b << endl;
Duplicar(a,b);
getch();
return 0;
}
void Duplicar(int& a,int& b){
int resultado = 0;
resultado = a * b;
cout << "\nEl resultado de la multiplicacion es: " << resultado << endl;	
}
