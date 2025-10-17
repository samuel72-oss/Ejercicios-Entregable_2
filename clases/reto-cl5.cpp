#include <iostream>
#include <string>
using namespace std;

class persona{
    protected:
        string nombre;
        int edad;
    public:
        persona(string,int);
        void infop();
};  

persona::persona(string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}

void persona::infop(){
    cout<<"Muy buenos dias/tarde/noches "<<nombre<<" solo queria recordarte que tienes "<<edad<<" años"<<endl;
}

class empleado : public persona{
    private:
        string codigo;
        string cargo;
        int salario;
    public:
        empleado(string,int,string,string,int);
        void datos();
        void masSalario();
        void evalSalario();
};

empleado::empleado(string _nombre, int _edad, string _codigo,string _cargo, int _salario) : persona(_nombre,_edad){
    codigo = _codigo;
    cargo=_cargo;
    salario=_salario;
}

void empleado::datos(){
    infop();
    cout<<"Tu cargo es: "<<cargo<<endl;
    cout<<"Tu salario es: "<<salario<<endl;
}
void empleado::masSalario(){
    float nwp;
    cout<<"Cuanto porcentaje aumentó tu salario?: ";
    cin>>nwp;
    salario=salario+(salario*nwp/100);
    cout<<"Tu nuevo salario es: "<<salario<<endl;
}

void empleado::evalSalario(){
    float prom;
    cout<<"Indica cual es el salario promedio de tu pais :";
    cin>>prom;
    if(salario<prom){
        cout<<"Tu salario en este momento "<<nombre<<" esta por debajo del promedio"<<endl;
    }

    else if(salario==prom){
        cout<<"Tu salario en este momento "<<nombre<<" es promedio"<<endl;
    }

    else{
        cout<<"Tu salario en este momento "<<nombre<<" esta por encima del promedio"<<endl;
    }
}

int main(){
    int op=0;
    int n;
    int i=0;
    string j;

    cout<<"=============================="<<endl;
    cout<<"\tBienvenido"<<endl;
    cout<<"=============================="<<endl;
    cout<<"\nCuantos empleados desea ingresar: ";
    cin>>n;
    empleado* empleados[n];
    string names[n];
    int ages[n];
    string carges[n];
    int money[n];
    string code[n];
    while(i<n){
        cout<<"Ingresa los siguientes datos de tu empleado numero #"<<i+1<<": "<<endl;
        cout<<"Nombre: ";
        cin>>names[i];
        cout<<"Codigo: ";
        cin>>code[i];
        cout<<"Edad: ";
        cin>>ages[i];
        cout<<"Cargo: ";
        cin>>carges[i];
        cout<<"Sueldo: ";
        cin>>money[i];
        i++;
    }
    i=0;
    while(i<n){
        empleados[i] = new empleado(names[i], ages[i], code[i], carges[i], money[i]);
        i++;
    }
    while(op!=4){
        cout<<"\n\tOPCIONES"<<endl;
        cout<<"1. Datos del empleado"<<endl;
        cout<<"2. Cambiar el salario"<<endl;
        cout<<"3. Evaluar el salario"<<endl;
        cout<<"4. Salir del programa"<<endl;
        cout<<"Selecciona una opcion: ";
        cin>>op;
        i=0;
        switch(op){
            case 1:
                cout<<"Ingresa el codigo del empleado que quieras saber sus datos: ";
                cin>>j;
                for(int i=0; i<n;i++){
                    if(code[i]==j){
                        empleados[i]->datos();
                    }
                    else{
                        cout<<"No existe ningún empleado con ese codigo"<<endl;
                        cout<<"INTENTELO DE NUEVO"<<endl;
                    }
                }
                break;
            case 2:
                cout<<"Ingresa el codigo del empleado que quieres modificar su salario: ";
                cin>>j;
                while(i<n){
                    if(code[i]==j){
                        empleados[i]->masSalario();
                    }
                    else{
                        cout<<"No existe ningún empleado con ese codigo"<<endl;
                        cout<<"INTENTELO DE NUEVO"<<endl;
                    }
                    i++;
                }
                break;
            case 3:
                cout<<"Ingresa el codigo del empleado que quieres evaluar su salario: ";
                cin>>j;
                while(i<n){
                    if(code[i]==j){
                        empleados[i]->evalSalario();        
                    }
                    else{
                        cout<<"No existe ningún empleado con ese codigo"<<endl;
                        cout<<"INTENTELO DE NUEVO"<<endl;
                    }
                    i++;
                }
                break;
            case 4:
                cout<<"Gracias por usar el mejor programa del mercado"<<endl;
                break;
        }
    }
}