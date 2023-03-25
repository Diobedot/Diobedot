#include <iostream>

int main()
{
    std::string nombre;
    double horas, salariob, salarion;

    std::cout<<"Dame el nombre: \n";
    std::cin>>nombre; //No acepta Espacios
    std::cout<<"Dame las horas: \n";
    std::cin>>horas;

    if (horas<=35)
    {
        salariob = horas * 15;
    }
    else
    {
        salariob = 15*35 + 1.5*(horas-35)*15;
    }
    if (salariob<=1000)
    {
        salarion = salariob;
    }
    else if(salariob>=1000 && salariob<=1400)
    {
        salarion = 1000 + (0.75*(salariob-1000));
    }
    else
    {
        salarion = 1000 + 0.75*400 + (0.55*(salariob-1400));
    }

    std::cout<<"El salario bruto de "<<nombre<<" es de = "<<salariob<<" y su salario neto es de = "<<salarion;
}