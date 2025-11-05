#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    const int SIZE = 10;
    int num[SIZE];

    std::srand(std::time(nullptr));

    for (int i = 0; i < SIZE; i++)
    {
        num[i] = std::rand() % 50;
        std::cout << num[i] << "\n";
    }
    std::cout << std::endl;
    return 0;
}