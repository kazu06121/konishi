#include <iostream>
#include <algorithm>
#include <random>
#include <ctime>


int main()
{
    int num[10];
    for (int i = 0; i < 11; i++)
    {
        num[i] = i;
    }
    int result;
    int target = 5;
    const int NUM_LENGTH = 11;

    //mt19937が乱数を生成するエンジン
    std::mt19937 randEngine(static_cast<unsigned int>(time(nullptr)));
    
    //shuffleでシャッフル　begin endで配列の頭とけつのアドレス取得
    std::shuffle(std::begin(num), std::end(num), randEngine);
    
    for (int i = 0; i < NUM_LENGTH; i++)
    {
        if (num[i] == target)
        {
            result = i - 1;
            break;
        }
    }

    std::cout << target << "のインデックスは" << result << "番目です \n" << std::endl;
    return 0;
}