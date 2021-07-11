#include <iostream>
using namespace std;
int main(){
	int n1, n2;
cout << "Ingrese el valor de n1: "; cin >> n1;
cout << "Ingrese el valor de n2: "; cin >> n2;
while(n2 > n1){
	cout << "Ingrese de nuevo el valor de n2: "; cin >> n2;
}	
cout << "n1: " << n1;
cout <<"\nn2: " << n2;
return 0;}

