#include <iostream>
using namespace std;

int main(){
    int i=0;
    int id[10]={245,645,867,123,564,768,987,555,324,115};
    float dist[10];
    float suma=0;
    int j=1;
    int con;

    cout<<"================================"<<endl;
    cout<<"'''''' REGISTRO DISTANCIA ''''''"<<endl;
    cout<<"================================\n"<<endl;
    while(i<10){
        cout<<"El conductor con el ID: "<<id[i]<<endl;
        cout<<"por favor ingresa tu distancia recorrida(Km): ";
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
            con=j;
        }   
        j++;
    }    
    cout<<"\tLa distancia promedio recorrida por los conductores fue de: "<<prom<<"Km"<<endl;
    cout<<"\tEl conductor con el ID "<<id[con]<<" obtuvo la mayor distancia de recorrido con: "<<dist[con]<<"km"<<endl;
    cout<<"\tLa distancia total recorrida por los conductores fue de: "<<suma<<"Km"<<endl;
    cout<<"\t\tGRACIAS (nos esforzamos mucho)"<<endl;
    
}