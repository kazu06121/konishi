#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main()
{
    const int SIZE = 10;
    int num[SIZE];

    std::srand(std::time(nullptr));

    for (int i = 0; i < SIZE; i++)
    {
        num[i] = std::rand() % 50;      //50までの乱数を代入
    }

    std::sort(num, num + SIZE);         //ソート

    for (int i = 0; i < SIZE; i++)      //配列の出力
    {
        std::cout << num[i] << " ";
    }

    return 0;                           //終了
}