#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int c = 10;
    string line;
    ofstream ohandler("Prueba.txt");
    ohandler.open("Prueba,txt");
    ohandler << "Hola Mundo de texto\n";
    ohandler <<"Lo siguiente es una cuenta regresiva\n";
    while (c>=1)
    {
        ohandler << c << "\n";
        c--;
    }
    ohandler << "FUEGO!";
    ohandler.close();

    ifstream ihandler("Prueba.txt");
    while(getline(ihandler,line))
    {
        cout<<"Si quiera pasas por aquí"<<line;

    }
    ihandler.close();   
    return 0;  
}