#include <iostream>

int main()
{
    int h = 0;
    float t = 0, sal = 0;

    std::cout<<"Ingrese el número de horas: ";
    std::cin >>h;
    std::cout<<"\nIngrese la tarifa por horas: ";
    std::cin >>t;
    sal = h*t;
    std::cout<<"El salario es de "<<sal;
}