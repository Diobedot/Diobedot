#include <iostream>

int main()
{
    int m = 0, s = 0;
    double t = 0, v = 0;
    bool cond = true;
    while(cond)
    {
        std::cout<<"Introduce los minutos. \n";
        std::cin >>m;
        std::cout<<"Introduce los segundos: \n";
        std::cin >>s;
        if (m == 0 && s == 0)
        {
            cond = false;
        }
        else
        {
            t = (m*60) + s;
            v = 1500/t;
            std::cout<<"La velocidad del corredor es de: "<<v<<" m/s\n";
        }
    }
}