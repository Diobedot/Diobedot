#include <iostream>

using namespace std;

int main()
{
    int N = 0, c = 1;

    cout<<"Ingrese cuantos multiplos de 4 quiere ver: ";
    cin >> N;
    
    while( c<= N)
    {
        cout<<c<<". "<<c*4<<"\n";
        c++;
    }
}