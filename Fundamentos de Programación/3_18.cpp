#include <iostream>

using namespace std;

int main()
{
    int suma = 0, c = 0;
    cout<<"Suma de numeros pares de 2 a 100\n";
    while (c<=100)
    {
        suma += c;
        c = c+2;
    }
    cout<<"El resultado es de: "<<suma;
}