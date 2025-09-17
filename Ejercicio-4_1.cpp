/*
Mariana Daza
Samuel Quesada
*/

#include <iostream>

int main() {
    int vec[5];
    int suma=0;
    int i=0;
    std::cout<<"\t==============================="<<std::endl;
    std::cout<<"\tBienvenido al programa que suma"<<std::endl;
    std::cout<<"\t==============================="<<std::endl;

    while (i<5) {
        std::cout<<"\nIngrese el numero: ";
        std::cin>>vec[i];
        i=i+1;
        }

    i=0;

    while (i<5) {
        suma= suma + vec[i];
        i=i+1;
        }
    std::cout<<"\n\t////// RESULTADOS //////"<<std::endl;
    std::cout<<"\nLa suma de los numeros ingresados es de: "<<suma<<std::endl;
}