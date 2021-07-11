#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string frase;
string palabras;

int main(){
    cout << "Ingrese una frase: ";
    getline(cin,frase);
    ofstream archivo;
    archivo.open("Frase.txt",ios::out);
    if(archivo.is_open()){
        archivo << frase;
    }
    archivo.close();
    ifstream archivo2;
    archivo2.open("Frase.txt",ios::in);
    if(archivo2.is_open()){
     while(!archivo2.eof()){
     archivo2 >> palabras;
     cout << palabras << " " << palabras.length() << " letras" << endl;
    }}archivo2.close();
cin.get();
return 0;}
