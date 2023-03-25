#include <iostream>
#include <ctime>
int main()
{
    int tarn = 0;
    srand(time(NULL));
    tarn = rand()%11;
    std::cout<<tarn;
}