#include <iostream>
using namespace std;
int main(){
int n, sumapar = 0, sumaimpar = 0;
cout << "Ingrese el valor de n: "; cin >> n;
for( int i = 1; i<=n; i++){
	if(i%2==0){
		sumapar = (sumapar + i);
	} else {
		sumaimpar = (sumaimpar + i); 
	}
}
cout << "La suma de numero pares es: " << sumapar << endl;
cout << "La suma impar es: " << sumaimpar << endl;
return 0;	
}
