#include <iostream>

int main(){
    int s = 0, n = 20;
     p = 1;
    while(n<=400){
        s += n;
        p *= n;
        n += 2;
    }
    std::cout<<"La suma es de "<<s<<"\n";
    std::cout<<"El producto es de "<<p;
}