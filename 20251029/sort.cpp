#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    const int SIZE = 10;
    int num[SIZE];

    std::srand((unsigned int)std::time(nullptr));

    for (int i = 0; i < SIZE; i++)      //乱数代入
    {
        num[i] = std::rand() % 50;
    }

    std::cout << "ソート前";
    for (int i = 0; i < SIZE; i++)      //ソート前の表示
    {
        std::cout <<num[i] << " ";
    }

    std::cout << std::endl;
    
    for (int i = 0; i < SIZE - 1; i++)  //ソート
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                int tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
        }
    }

    std::cout <<"ソート後";
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
