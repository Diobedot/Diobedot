#include <iostream>

int main()
{
    int a = 0, b = 0, c = 1;
    std::cout<<"Ingrese su número: \n";
    std::cin >>a;
    
    while(c<4)
    {
    std::cout<<"Ingrese su número: \n";
    std::cin >>b;
        if(a>=b)
        {
            c++;
        }
        else
        {
            a = b;
            c++;
        }
    }
    std::cout<<"El número mayor es: "<<a<<"\n";
}