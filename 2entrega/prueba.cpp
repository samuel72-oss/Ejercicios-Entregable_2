#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos días conoces el precio esta semana? ";
    cin >> n;

    while (n > 7 || n < 1) {
        cout << "Es imposible, la semana tiene máximo 7 días.\n";
        cout << "Vuelve a ingresar: ";
        cin >> n;
    }

    int ss[n];
    for (int i = 0; i < n; i++) {
        cout << "Precio del día " << i + 1 << ": ";
        cin >> ss[i];
    }

    int r = ss[0]; // menor precio (compra)
    int l = 0;     // día del menor
    int s = 0;     // ganancia máxima
    int j = 0;     // día de venta

    // Tu misma lógica, pero corregida:
    for (int i = 1; i < n; i++) {
        if (ss[i] - r > s) { // ¿hay más ganancia si vendo hoy?
            s = ss[i] - r;   // actualizo la ganancia
            j = i;           // guardo día de venta
        }
        if (ss[i] < r) {     // ¿precio más barato para comprar?
            r = ss[i];       // actualizo precio mínimo
            l = i;           // guardo día de compra
        }
    }

    if (s > 0) {
        cout << "\nDebe comprar el día " << l + 1 << " a $" << r;
        cout << " y vender el día " << j + 1 << " a $" << ss[j] << endl;
        cout << "Ganancia máxima: $" << s << endl;
    } else {
        cout << "\nNo hay ganancia posible (los precios no suben)\n";
    }

    return 0;
}