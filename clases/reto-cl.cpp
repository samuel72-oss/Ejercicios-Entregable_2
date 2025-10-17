#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class circulo{
    private:
        float radio;
        string nombre;
    public:
        circulo (float, string);
        void area();
        void circunferencia();
        void info();
};

circulo::circulo(float _radio, string _nombre){
    radio=_radio;
    nombre=_nombre;
}

void circulo::area(){
    float a= 3.1416*pow(radio,2);
    cout<<"El area de "<<nombre<<" es: "<<a<<endl;
}

void circulo::circunferencia(){
    float b=3.1416;
    float c= 2*b*radio;
    cout<<"La circunferencia de "<<nombre<<" es: "<<c<<endl;
}

void circulo::info(){
    cout<<"Tu circulo con el nombre: "<<nombre<<" tiene radio: "<<radio<<endl;
}

int main(){
    string n;
    float r;

    cout<<"Ingresa el nombre de tu circulo: ";
    cin>>n;
    cout<<"Ingresa su radio: ";
    cin>>r;
    circulo c1= circulo(r,n);

    c1.area();
    c1.circunferencia();
    c1.info();


}