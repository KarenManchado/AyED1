#include <iostream>
#include <conio.h>
using namespace std;
void part_frac(double);

int main(){
double  n = 0;
cout << "Ingrese la fraccion: "; cin >> n;
part_frac(n);	
getch();
return 0;	
}

void part_frac(double x){
int aux = x;
double resultado = 0;
resultado = x - aux;
cout << "La parte fracionaria es: " << resultado;
}
