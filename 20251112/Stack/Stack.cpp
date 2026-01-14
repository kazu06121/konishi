#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    std::srand((unsigned int)std::time(nullptr));

    const int DATASIZE = 26;
    char data[DATASIZE];      //A~Zの変数

    int count = 0;        //スタックのサイズ
    int top = 0;          //次にPushするインデックス

    char currentChar = 'A'; //インデックス
    for (char c = 'A'; c <= 'Z'; ++c)
    {
        std::cout << "フレーム " << "\n";

        data[top] = currentChar;   //Push

        std::cout << "Push : " << currentChar << "\n";

        // topを進める（循環）
        top = (top + 1) % 26;

        // サイズ更新
        if (count < DATASIZE)
        {
            count++;
        }

        currentChar++;
        if (currentChar > 'Z')  //ループ
        {
            currentChar = 'A';
        }

        if (count > 0 && std::rand() % 2 == 0)
        {
            int popIndex = (top - 1 + DATASIZE) % DATASIZE;

            std::cout << "Pop : " << data[popIndex] << "\n";

            // topを戻す
            top = popIndex;
            count--;
        }

        std::cout << "DATA : "; //スタックの一覧
        for (int i = 0; i < count; i++)
        {
            std::cout << "[" << data[i] <<"] ";
        }
        std::cout << "\n\n";

    }

    return 0;
}
