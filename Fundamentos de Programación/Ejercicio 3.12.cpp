#include <iostream>

int main(){
    std::cout<<"3.12\n";
    int sp = 0, si = 0, c = 0;
    while(c<=200){
        if(c%2 == 0){
            sp += c;
        }
        else{
            si +=c;
        }
        c++;
    }
    std::cout<<"El resultado de la suma par es de "<<sp<<"\n";
    std::cout<<"El resultado de la suma impar es de "<<si<<"\n";
}