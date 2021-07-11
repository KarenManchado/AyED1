#include <iostream>
using namespace std;
int main(){
float f = 0, celsius = 0;
cout << "Ingrese el los grados Fahrenheit: ";
cin >> f;
celsius = (5/9) * ( f - 32 );
cout << "Grados Celsius: " << celsius << endl;	
	return 0;
}
