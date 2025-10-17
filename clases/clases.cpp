#include <iostream>
#include <stdlib.h>
#include <string> 

using namespace std;



class Persona{
    private: //Atributos
        int edad;
        string nombre;
    public: //Metodos
        Persona(int,string); //Constructor
        void leer();
        void correr();

};

//Constructor, sirve para inicializar los atributos
Persona::Persona(int _edad,string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;  
}

void Persona::correr(){
    cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" años"<<endl;
}

int main(){
    Persona p1 = Persona(17,"Samuel");
    Persona p2 = Persona(17,"Sofia");
    Persona p3 = Persona(25,"Sergio");
    p1.leer();
    p2.correr();

    p3.leer();
    p3.correr();
    
}