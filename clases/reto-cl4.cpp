#include <iostream>
#include <string>
using namespace std;

class estudiante{
    private:
        string nombre;
        int edad;
        float promedio;
    public:
    estudiante(string,int,float);
        void datos();
        void evaluar();
        void newprom();
};

estudiante::estudiante(string _nombre, int _edad, float _promedio){
    nombre= _nombre;
    edad= _edad;
    promedio= _promedio;
}

void estudiante::datos(){
    cout<<"El estudiante "<<nombre<<" con "<<edad<<" años tiene un promedio de "<<promedio<<endl;
}

void estudiante::evaluar(){
    if (promedio>=3.0){
        cout<<"-------------------------------------------"<<endl;
        cout<<"\tFelicitacionesss aprovaste"<<endl;
        cout<<"-------------------------------------------"<<endl;
    }
    else{
        cout<<"Querido estudiante es de mi desagrado informarle que repobro el corte/semestre/año"<<endl;
    }
}

void estudiante::newprom(){
    float pr;
    cout<<" Querido estudiante ingrese cual es su nuevo promedio: ";
    cin>>pr;
    promedio=pr;
}

int main(){
    int op;
    string n;
    int e;
    float p;

    cout<<"\t...................................."<<endl;
    cout<<"\tBienvenido al programa del promedio"<<endl;
    cout<<"\t...................................."<<endl;
    cout<<"\nIngresa tu nombre: ";
    cin>>n;
    cout<<"Ingresa tu edad: ";
    cin>>e;
    cout<<"Ingresa tu promedio (0.0 - 5.0): ";
    cin>>p;
    estudiante e1 = estudiante(n,e,p);

    while(op!=4){
        cout<<"\n\tMENÚ OPCIONES"<<endl;
        cout<<"1. Evaluar tu promedio"<<endl;
        cout<<"2. Cambiar tu promedio"<<endl;
        cout<<"3. Verificar tus datos"<<endl;
        cout<<"4. Terminar el programa"<<endl;
        cout<<"Selecciona la opción que deseas: ";
        cin>>op;
        switch(op){
            case 1:
                e1.evaluar();
                break;
            case 2:
                e1.newprom();
                break;
            case 3:
                e1.datos();
                break;
            case 4:
                cout<<"Usaste el mejor programa disponible, te esperamos pronto"<<endl;
                break;
        }

    }
}