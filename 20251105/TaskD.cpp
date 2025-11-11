#include <iostream>

int main()
{
    int num[100];
    for (int i = 1; i < 100; i++)
    {
        num[i] = i;
        if (num[i] % 5 == 0 && num[i] % 3 == 0)
        {
            std::cout << "FizzBuzz \n";
        }
        else if (num[i] % 3 == 0)
        {
           std::cout << "Fizz \n"; 
        }
        else if (num[i] % 5 == 0)
        {
            std::cout << "Buzz \n";
        }
        else{
            std::cout << num[i] << " \n";
        }
    }
    std::cout << std::endl;
    return 0;
}