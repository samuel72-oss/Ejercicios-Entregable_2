#include <iostream>
#include <cmath>

int main(){
    int p;
    float r;
    int n;
    int t;
    float A1;
    std::cout<<"////INTERES COMPUESTO////\t"<<std::endl;
    std::cout<<"Bienvenid@ al programa para calcular el interes compuesto"<<std::endl;
    std::cout<<"Para iniciar ingresa los siguientes datos:"<<std::endl;
    std::cout<<"Indica el valor de tu cantidad inicial invertida: ";
    std::cin>>P;
    std::cout<<"Cual es la tasa de interes anual de tu inversion: ";
    std::cin>>r;
    std::cout<<"Cuantas veces en el año se aplica el interes: ";
    std::cin>>n;
    std::cout<<"De cuantos años es la inversion: ";
    std::cin>>t;
    A1=1+r/n;
    A2=n*t;
    A3=pow(A1, A2);
    Atotal=P*A3;



}