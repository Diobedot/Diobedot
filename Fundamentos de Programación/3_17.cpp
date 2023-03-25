#include <iostream>

using namespace std;

int main()
{
    int suma = 0, c = 0;
    cout<<"Suma de los cuadrados de los primeros 100 numeros naturales\n";
    while (c <= 99)
    {
        suma += c*c;
        c++;
        cout<<suma<<"\n";
    }
    cout<<"El resultado es de: "<<suma;
    return 0;
}