#include <iostream>
using namespace std;



int main(){
    int i=0;
    int id[10]={245,645,867,123,564,768,987,555,324,115};
    float dist[10];

    while(i<10){
        cout<<"El conductor con el ID: "<<id[i]<<endl;
        cout<<"por favor ingrese su distancia recorrida(Km): ";
        cin>>dist[i];
        cout<<"Gracias por tu labor"<<endl;
        cout<<"\n";
        i++;

    }

}