#include <iostream>
#include <conio.h>
using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
int totalseg, horas, min, seg;
cout <<	"Ingrese la cantidad de segundos: ";
cin >> totalseg;
tiempo(totalseg, horas, min, seg);
cout << "\nHoras: " << horas << endl;
cout << "Minutos: " << min << endl;
cout << "Segundos: " << seg << endl;
getch();
return 0;
}

void tiempo(int totalseg, int& horas, int& min, int& seg){
horas = totalseg/3600;
totalseg = totalseg%3600;
min = totalseg/60;
seg = totalseg%60;
}
