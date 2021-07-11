#include <iostream>
using namespace std;
int main(){
int seg = 0, horas = 0, minutos = 0;	
cout << " ingrese los segundos transcurridos: ";
cin >> seg;
horas = (seg / 3600);
minutos = (seg / 60);
cout << " las horas transcurridas son: " << horas << endl;
cout << " la cantidad de minutos transcurridas son: " << minutos << endl;	
	return 0;
	
}
