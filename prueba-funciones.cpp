#include <iostream>
#include <cctype>

int main(){

    char respuesta;
    std::cout << "¿Desea ingresar los puntos manualmente? (s/n): ";
    // Leer la respuesta del usuario
    std::cin>>respuesta;
    while (respuesta != 's' && respuesta != 'n'){
        std::cout << "Tu respuesta no es valida por favor (s/n)";
        std::cin>>respuesta;
        respuesta=tolower(respuesta);
    }
    return 0;

}