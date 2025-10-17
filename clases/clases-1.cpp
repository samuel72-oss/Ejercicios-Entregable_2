#include <iostream>
#include <string>
using namespace std;

class rectangulo{
    private:
        int ancho;
        int largo;
    public:
        rectangulo(int,int);
        void diametro();
        void area();

};

rectangulo::rectangulo(int _ancho,int _largo){
    ancho = _ancho;
    largo = _largo;
}

void rectangulo::diametro(){
    int d= 2*ancho + 2*largo;
    cout<<"El diametro del rectangulo es "<<d<<"cm"<<endl;
}

void rectangulo::area(){
    int a= ancho*largo;
    cout<<"El area del rectangulo es "<<a<<"cm^2"<<endl;
}

int main(){
    int n;
    int k;

    cout<<"ingrese el ancho del rectangulo: ";
    cin>>n;
    cout<<"ingrese el largo del rectangulo: ";
    cin>>k;

    rectangulo r1 = rectangulo(n,k);
    cout<<"\n";
    r1.diametro();
    r1.area();
}