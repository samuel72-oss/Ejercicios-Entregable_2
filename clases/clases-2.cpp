#include <iostream>
#include <string>
using namespace std;

class persona{
    private:
        string nombre;
        int edad;
    public:
        persona(string,int);
        void mostrarPersona();
};

class alumno : public persona{
    private:
        string codigo;
        float nota;
    public:
        alumno(string,int,string,float);
        void mostrarAlumno();
};

persona::persona(string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}

alumno::alumno(string _nombre, int _edad, string _codigo, float _nota) : persona(_nombre,_edad){
    codigo = _codigo;
    nota = _nota;
}

void persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void alumno::mostrarAlumno(){
    mostrarPersona();
    cout<<"Codigo Alumno: "<<codigo<<endl;
    cout<<"Nota: "<<nota<<endl;
}

int main(){
    alumno a1 = alumno("Samuel",17,"213123124",4.4);
    
    a1.mostrarAlumno();
}