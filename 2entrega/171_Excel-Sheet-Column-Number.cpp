#include <iostream>
#include <string>
using namespace std;

int main() {
     string col;
     int num = 0;
     int i=0;
     int valor;
     char c;
     cout<<"Ingrese la columna que desea convertir a número (Use mayúsculas): ";
     cin>>col;
     while(col[i] != '\0'){
        c=col[i];
        valor = c - 'A' + 1;
        num = num * 26 + valor; 
        i++;
     }
     cout<<"La columna "<<col<<" se convierte a número: "<<num<<endl;
}