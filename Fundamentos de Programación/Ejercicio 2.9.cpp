#include <iostream>

int main()
{
    int n = 0, c = 2, p = 2;
    std::cout<<"Introduce el número N: ";
    std::cin >>n;
    while(p<=n)
    {
        if(p%c == 0)
        {
            if(p == c)
            {
                std::cout<<p<<"\n";
            }
            p++;
            c = 2;
        }
        else
        {
            c++;
        }
    }
}