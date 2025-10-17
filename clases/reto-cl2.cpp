#include <iostream>
#include <string>
using namespace std;

class cuenta{
    private:
        long int numeroC;
        string nombre;
        float saldo;
    public:
        cuenta(long int, string, float);
        void depositar();
        void retirar();
        void acsaldo();    
};

cuenta::cuenta(long int _numeroC, string _nombre, float _saldo){
    numeroC = _numeroC;
    nombre = _nombre;
    saldo = _saldo;
}

void cuenta::depositar(){
    long int s;
    cout<<"Cuanto dinero deseas depositar: ";
    cin>>s;
    saldo= saldo + s;
}

void cuenta::retirar(){
    long int r;
    cout<<"Cuanto dinero deseas retirar: ";
    cin>>r;
    if(r<=saldo){
        saldo= saldo - r;
    }
    else{
        cout<<nombre<<" no tienes esa cantidad de dinero, lo siento"<<endl;
    }
}
void cuenta::acsaldo(){
    cout<<nombre<<" tu cuenta numero "<<numeroC<<" tiene un saldo final de: "<<saldo<<"\n"<<endl;
}


int main(){
    string n;
    long int c;
    float ss;
    int r=0;
    string tr="si";

    cout<<"Ingresa tu nombre: ";
    cin>>n;
    cout<<"Tu numero de cuenta es: ";
    cin>>c;
    cout<<"Ingresa tu saldo: ";
    cin>>ss;
    cout<<"\n";
    cuenta c1=cuenta(c,n,ss);
    while(tr=="si"){
        cout<<"============================"<<endl;
        cout<<"Ingresa la opcion que deseas"<<endl;
        cout<<"============================"<<endl;
        cout<<"\n";
        cout<<"1. Depositar dinero"<<endl;
        cout<<"2. Retirar dinero"<<endl;
        cout<<"4. salir"<<endl;
        cout<<"Selecciona tu opcion: ";
        cin>>r;

        if(r==1){
            c1.depositar();
        }
        else if(r==2){
            c1.retirar();
        }
        cout<<"Quieres ver como esta tu saldo actualmente (si/no): ";
        cin>>tr;
        if(tr=="si"){
            c1.acsaldo();
        }
        cout<<"\nDeseas realizar otra opción (si/no): ";
        cin>>tr;
    }
}