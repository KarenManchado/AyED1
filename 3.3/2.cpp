#include <iostream>
using namespace std;
double opcion1(double&);
double opcion2(double&);
double opcion3(double&);
double opcion4(double&);

int main(){
	int opcion;
	double s1, s2, s3, s4;
	cout << "		Tipo de sueldo: ";
	cout << "\n Opcion 1: sueldo de $0 a $9000";
	cout << "\n Opcion 2: sueldo de $9000 a $15000";
	cout << "\n Opcion 3: sueldo de $15000 a $20000";
	cout << "\n Opcion 4: mas de $20000";
	
	cout << "\n Ingrese la opcion: "; cin >> opcion;
while(opcion!=0){
switch(opcion){
	case 1: { cout << "Ingrese el salario: "; cin >> s1;
	cout << "El salario con aumento es de: $" << opcion1(s1) << endl;
	cout << "Ingrese 0 para salir del programa, o alguna de las otras opciones: ";
	cin >> opcion;
		break;
	}
	case 2: {cout << "Ingrese el salario: "; cin >> s2;
	cout << "El salario con aumento es de: $" << opcion2(s2) << endl; 
	cout << "Ingrese 0 para salir del programa, o alguna de las otras opciones: ";
	cin >> opcion;
	break;
	}
	case 3: {cout << "Ingrese el salario: "; cin >> s3;
	cout << "El salario con aumento es de: $" << opcion3(s3) << endl; 
	cout << "Ingrese 0 para salir del programa, o alguna de las otras opciones: ";
	cin >> opcion;
	break;
	}
	case 4: {cout << "Ingrese el salario: "; cin >> s4;
	cout << "El salario con aumento es de: $" << opcion4(s4) << endl; 
	cout << "Ingrese 0 para salir del programa, o alguna de las otras opciones: ";
	cin >> opcion;
	break;
	}
	default: { cout << "Ingrese la opcion correcta: " ; cin >> opcion;
	break;
	}
}}

return 0;
}

double opcion1(double& s1){
	double sueldo1; 
	sueldo1 = (s1 * 1.20);
	return sueldo1;
}
double opcion2(double& s2){
	double sueldo2; 
	sueldo2 = (s2 * 1.10);
	return sueldo2;
}

double opcion3(double& s3){
	double sueldo3; 
	sueldo3 = (s3 * 1.05);
	return sueldo3;
}

double opcion4(double& s4){
	double sueldo4; 
	sueldo4 = (s4 * 1.03);
	return sueldo4;
}


