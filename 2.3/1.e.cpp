#include <iostream>
using namespace std;
int main(){
	int x1, x2, x3, x4;
	float y1 = 0, y2 = 0, y3 = 0, y4 = 0;
	cout << "Ingrese el valor de x1: "; cin >> x1;
	cout << "Ingrese el valor de x2: "; cin >> x2;
	cout << "Ingrese el valor de x3: "; cin >> x3;
	cout << "Ingrese el valor de x4: "; cin >> x4;
	
y1 = (2 * x1) + 1; 
y2 = (2 * x2) + 1;
y3 = (2 * x3) + 1;
y4 = (2 * x4) + 1;

cout << "\ny1: " << y1 << endl;
cout << "y2: " << y2 << endl;
cout << "y3: " << y3 << endl;
cout << "y4: " << y4 << endl;  
	return 0;
}
