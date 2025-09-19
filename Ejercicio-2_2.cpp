#include <iostream>
using namespace std;



int main(){
    int i=0;
    int id[10]={245,645,867,123,564,768,987,555,324,115};
    float dist[10];
    float suma;
    int j=1;

    while(i<10){
        cout<<"El conductor con el ID: "<<id[i]<<endl;
        cout<<"por favor ingrese su distancia recorrida(Km): ";
        cin>>dist[i];
        cout<<"Gracias por tu labor"<<endl;
        cout<<"\n";
        i++;
    }
    i=0;
    while(i<10){
        suma=suma+dist[i];
        i++;

    }
    float prom=suma/10;

    float a=dist[0];
    while(j<10){
        if(dist[j]>a){
            a=dist[j];
            int con=j
        }   
        j++;
    }    

}