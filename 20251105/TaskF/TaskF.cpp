#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int valueA;
    int valueB;
    int max;
    int min;
    const int dataSize = 100;
    int data[dataSize];

    // 乱数が100個入った配列
    std::srand(std::time(nullptr));

    for (int i = 0; i < dataSize; i++)
    {
        data[i] = std::rand() % 100;
        std::cout << data[i] << "\n";
    }
    std::cout << std::endl;

    // ループ１
    for (int i = 0; i < dataSize; ++i)
    {
        // ループ２
        for (int j = dataSize - 1; j >= i; --j)
        {
            valueA = data[i];
            valueB = data[j];
            if (valueA > valueB)
            {
                max = valueA;
                min = valueB;
                data[i] = min;
                data[j] = max;
            }
        }
    }
    // 結果の出力
    for (int i = 0;  i < dataSize; ++i)
    {
        std::cout << data[i] << "\n"; 
    }

    std::cout << std::endl;
    return 0;
}