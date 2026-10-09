

#include <iostream>
using namespace std;

int main()
{
    double precio, cantidad, total, iva = 0.16;
    cout << "Ingresa el precio del producto: "; cin >> precio;
    cout << "Ingresa la cantidad: "; cin >> cantidad;
    total = (precio * cantidad) * (1 + iva); // se usa el 1 + iva para obtener el valor orignal mas el impuesto en un solo paso
    cout << "Total a pagar (con IVA): $" << total << endl;

    if (total > 1000) cout << "Aplica para envio gratis." << endl;
	return 0; 
}
//Sebastian Acosta Ortiz
