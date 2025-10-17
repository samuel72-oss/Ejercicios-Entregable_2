#include <iostream>
using namespace std;

int main(){
    int i=0;
    int n;
    bool a=false;
    int j=0;
    int m;
    int com;
    int ven;
    int gan=0;
    int ii=0;
    int jj=0;
    cout<<"\t===================================="<<endl;
    cout<<"\tBIENVENID@ AL PROGRAMA DE GANANCIAS"<<endl;
    cout<<"\t====================================\n"<<endl;
    cout<<"Para poder analizar las ganancias del mercado y exponerte los resultados ingresa cuantos dias conoces el precio esta semana: ";
    cin>>n;
    while(a==false){
        if(n<8){
            a=true;
        }
        else{
            cout<<"Es imposible, la semana maximo tiene 7 dias\n"<<endl;
            cout<<"Vuelve a ingresar: ";
            cin>>n;
        }
        
    }
    cout<<"\n";
    int ss[n];
    while(i<n){
        cout<<"Ingresa el valor de mercado del dia "<<i+1<<": ";
        cin>>ss[i];
        i++;
    }
}