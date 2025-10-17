#include <iostream>
#include <string>
using namespace std;

class autos{
    public:
        string marca;
        string modelo;
        int velocidad;

        autos(string,string,int);
        void acelerar();
        void frenar();
        void estado();
};

autos::autos(string _marca, string _modelo, int _velocidad){
    marca=_marca;
    modelo=_modelo;
    velocidad=_velocidad;
}

void autos::acelerar(){
    int v;
    cout<<"Cuantos km/h desea acelerar su "<<marca<<" modelo "<<modelo<<": ";
    cin>>v;
    velocidad=velocidad + v;
}
void autos::frenar(){
    int vb;
    cout<<"Cuantos km/h desea frenar su "<<marca<<" modelo "<<modelo<<": ";
    cin>>vb;
    if(vb <=velocidad){
        velocidad=velocidad - vb;
    }
    else{
        cout<<"No puedes reducir esa velocidad tendrias velocidad negativa";
    }
}
void autos::estado(){
    cout<<"Su carro es de marca: "<<marca<<endl;
    cout<<"De modelo: "<<modelo<<endl;
    cout<<"Y actualmente tiene una velocidad de: "<<velocidad<<"km/h"<<endl;
}


int main(){
    string m;
    string l;
    int j;
    int b;
    int op=0;
    int i=1;

    cout<<"ingresa la marca de tu carro: ";
    cin>>m;
    cout<<"ingresa el modelo de tu carro: ";
    cin>>l;
    cout<<"Cada cuantos km deseas variar la velocidad de tu carro: ";
    cin>>j;
    cout<<"Tu carro actualmente va a 0km/h cual deseas que sea su velocidad inicial: ";
    cin>>b;
    autos a1=autos(m,l,b);
    while(op!=4){
        cout<<"\nYa pasaron "<<j*i<<"km, que acción deseas realizar"<<endl;
        cout<<"\n1. Acelerar"<<endl;
        cout<<"2. Frenar"<<endl;
        cout<<"3. revisar el estado actual del carro"<<endl;
        cout<<"4. Frenar competamente y terminar el viaje"<<endl;
        cout<<"\nTu decision es el numero: ";
        cin>>op;
        cout<<"\n";

        
        switch(op){
            case 1:
                a1.acelerar();
                break;
            case 2:
                a1.frenar();
                break;
            case 3:
                a1.estado();
                break;
            case 4:
                cout<<"Actualmente tu caro "<<a1.marca<<" modelo "<<a1.modelo<<" ha terminado su viaje"<<endl;
                break;
        }
        i++;
    }
}