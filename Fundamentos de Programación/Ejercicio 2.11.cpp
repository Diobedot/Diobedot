#include <iostream>

int main()
{
    float r = 0, area = 0, perimetro = 0;
    double pi = 3.141592653589793;
    
    std::cout<<"Ingrese el radio de la circunferencia: \n";
    std::cin >>r;
    area = pi*r*r;
    perimetro = pi*r*2;
    std::cout<<"El área del circulo es de: "<<area;
    std::cout<<"El perímero del circuko es: "<<perimetro;
}