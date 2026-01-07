#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{

    const int dataSize = 100;
    int data[dataSize];

    // 乱数が100個入った配列
    std::srand(std::time(nullptr));

    for (int i = 0; i < dataSize; i++)
    {
        data[i] = std::rand() % 100;
    }

    // ソート
    for (int i = 0; i < dataSize; ++i)
    {
        for (int j = dataSize - 1; j >= i; --j)
        {
            int valueA = data[i];
            int valueB = data[j];
            if (valueA > valueB)
            {
                int max = valueA;
                int min = valueB;
                data[i] = min;
                data[j] = max;
            }
        }
    }
    for (int i = 0;  i < dataSize; ++i)
    {
        std::cout << i << "," << data[i] << "\n"; 
    }

    std::cout << std::endl;

    int target = 50;
    int result = -1;
    int left = 0;
    int right = dataSize - 1;

    // ループ
    while (left < right)
    {
        int mid = (left + right) / 2;

        if (data[mid] == target)
        {
            result = mid;
            break;
        }
        else
        {
            if (data[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
    }
    if (result >= 0)
    {
        std::cout << "targetのインデックスは" << result << "です" << std::endl;
    }
    else
    {
        std::cout << "targetは見つかりませんでした" << std::endl;
    }
    return 0;
}