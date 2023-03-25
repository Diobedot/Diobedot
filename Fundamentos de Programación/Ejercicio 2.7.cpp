#include <iostream>

int main()
{
    double a = 0, b = 0, c = 0;

    std::cout<<"Ingrese su primer número: \n";
    std::cin >>a;

    std::cout<<"Ingrese su segundo número: \n";
    std::cin >>b;

    std::cout<<"Ingrese su tercer número \n";
    std::cin >>c;

    if(a+b == c || a+c == b || b+c == a)
    {
        std::cout<<"Es suma\n";
    }
    else
    {
        std::cout<<"No es suma\n";
    }
}