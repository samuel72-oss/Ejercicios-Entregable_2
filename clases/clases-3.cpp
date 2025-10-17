//Polimorfismo

#include <iostream>
#include <string>
using namespace std;

class persona{
    private:
        string nombre;
        int edad;
    public:
        persona(string,int);
        virtual void mostrar();
};

class alumno : public persona{
    private:
        float nota;
    public:
        alumno(string,int,float);
        void mostrar();
};  

class profesor : public persona{
    private:
        string materia;
    public:
        profesor(string,int,string);
        void mostrar();
};

profesor::profesor(string _nombre,int _edad,string _materia) : persona(_nombre,_edad){
    materia=_materia;
}

void profesor:: mostrar(){
    persona::mostrar();
    cout<<"Materia: "<<materia<<endl;
}
alumno::alumno(string _nombre, int _edad, float _nota) : persona(_nombre,_edad){
    nota=_nota;
}

void alumno::mostrar(){
    persona::mostrar();
    cout<<"Nota: "<<nota<<endl;
}

persona::persona(string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}

void persona::mostrar(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}


int main(){
    persona *vector[3];

    vector[0]=new alumno("Samuel",17,4.4);
    vector[1]=new alumno("Maria",22,3.4);
    vector[2]=new profesor("Jose",54,"Matematicas");
    
    vector[0]->mostrar();
    cout<<"\n";
    vector[1]->mostrar();
    cout<<"\n";
    vector[2]->mostrar();
}