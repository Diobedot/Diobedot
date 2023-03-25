#include <iostream>
#include <vector>

int main()
{
    int sum_even = 0, product_odd = 1;
    std::vector<int> numbers = {2,4,3,6,1,9};
    for(int i=0; i<numbers.size(); i++)
    {
        if(numbers[i]%2==0)
        {
            sum_even += numbers[i];
        }
        else
        {
            product_odd *= numbers[i];
        }
    }
    std::cout<<"Sum of even numbers is "<<sum_even<<"\n";
    std::cout<<"Product of odd numbers is "<<product_odd<<"\n";
}