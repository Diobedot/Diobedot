#include <iostream>

using namespace std;

int main()
{
    float a = 0, pb = 0;
    int c = 0;

    cout<<"Sistema de venta\n";
    cout<<"Ingrese el valor del articulo que desea comprar: ";
    cin >>a;
    cout<<"\nIngrese cuantos articulos va a comprar: ";
    cin >>c;

    pb = c*a*1.15;

    if (pb>1000)
    {
        pb *= 0.95;
    }
    cout<<"La cantidad total a pagar es de "<<pb<<" pesos.";
    return 0;
}