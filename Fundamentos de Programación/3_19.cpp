#include <iostream>

using namespace std;

int main()
{
    int c = 1;
    float suma = 0, num = 0;

    cout<<"Suma de 10 números introducidos con el teclado\n";
    while (c<=10)
    {
        cout<<"Introduce tu numero "<<c<<"\n";
        cin >>num;
        suma += num;
        c++;
    }
    cout<<"El resultado es de "<<suma;
}