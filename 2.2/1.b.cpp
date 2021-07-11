#include <iostream>
using namespace std;
int main(){
	int n1 = 0 , n2 = 0, n3 = 0, suma = 0;
	double prom = 0;
	cout << " ingrese el primer dato: ";
	cin >> n1;
	cout << "Ingrese el segundo valor: ";
	cin >> n2;
	cout << "Ingrese el tercer valor: ";
	cin >> n3;
	suma = n1 + n2 + n3;
	prom = suma / 3;
cout << "El promedio es: " << prom << endl;
	return 0;
}
