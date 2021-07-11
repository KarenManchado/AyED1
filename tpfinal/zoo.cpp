#include <iostream>
#include <string>
using namespace std;
#include "abstract.h"
#include "oviparous.h"
#include "mammal.h"


void animal :: setname(){
	cout << "Ingrese el nombre del animal: ";
	getline(cin,name);
}

void animal :: getname(){
	cout << name;
}

void animal::setcode(int c){
	code = c;
}

void animal::tipo(){
	if (code == 1)
    {
        cout << "Tipo de animal: Cocodrilo" << endl;
    }
    else
    {
        if (code == 2)
        {
            cout << "Tipo de animal: Ganso" << endl;
        }
         else
         {
             if (code == 3)
             {
                 cout << "Tipo de animal: Pelicano" << endl;
             }
             else
             {
                 if (code == 4)
                 {
                     cout << "Tipo de animal: Murcielago" << endl;
                 }
                 else
                 {
                     if (code == 5)
                     {
                         cout << "Tipo de animal: Ballena" << endl;
                     }
                     else
                     {
                         if (code == 6)
                         {
                             cout << "Tipo de animal: Leon Marino" << endl;
                         }
                     }
                 }
             }
         }
    }
}
			 
void animal :: breed(){
	if((code>=1)&&(code<=3)){
		oviparous *oviparous;
		oviparous -> layeggs();	
	} else {
		if((code>=4)&&(code<=6)){
			mammal *mammal;
			mammal -> nurse();
		}
	}
}


void oviparous :: layeggs(){
	cout << "Puso un huevo" << endl;
}
void mammal :: nurse(){
	cout << "Esta preniada" << endl;}

//animales oviparos del zoo

crocodile::crocodile()
{}


crocodile::~crocodile()
{}

void crocodile::comer(){
	std::cout << "El cocodrilo esta comiendo" << std::endl;
}

void crocodile::dormir(){
	std::cout << "El cocodrilo esta durmiendo" <<std::endl;
}

goose::goose()
{}

goose::~goose()
{}

void goose::comer(){
std::cout << "El ganso esta duriendo" <<std::endl;
}
void goose::dormir(){
std::cout << "El ganso esta durmiendo" << std::endl;
}

pelican::pelican()
{}

pelican::~pelican()
{}

void pelican::comer(){
std::cout << "El pelicano esta comiendo" << std::endl;
}

void pelican::dormir(){
std::cout << "El pelicano esta durmiendo" << std::endl;
}



bat::bat()
{}

bat::~bat()
{}

void bat::comer(){
std::cout << "El murcielago esta comiendo" << std::endl;
}

void bat::dormir(){
std::cout << "El murcielago esta durmiendo" << std::endl;
}

whale::whale()
{}

whale::~whale()
{}

void whale::comer(){
std::cout << "La ballena esta comiendo" <<std::endl;
}

void whale::dormir(){
std::cout << "La ballena esta durmiendo" << std::endl;
}

sealion::sealion()
{}

sealion::~sealion()
{}

void sealion::comer(){
std::cout <<	"El Leon marino esta comiendo" <<std::endl;
}
void sealion::dormir(){
std::cout << "El leon marino esta durmiendo" <<std::endl;
}

