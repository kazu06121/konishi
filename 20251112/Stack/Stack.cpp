#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    std::srand((unsigned int)std::time(nullptr));

    char data[26];      //A~Zの変数
    int  num[26];       //変数に入る数

    int count = 0;        //スタックのサイズ
    int top = 0;          //次にPushするインデックス

    char currentChar = 'A'; //インデックス
    int frame = 0;          //currentframe
    int maxFrame = 100;     //実行回数

    while (frame < maxFrame)
    {
        std::cout << "フレーム " << frame + 1 << "\n";

        int rnd = std::rand() % 100;

        data[top] = currentChar;    
        num[top]  = rnd;            //Push

        std::cout << "Push : " << currentChar << "  数=" << rnd << "  index=" << top + 1 << "\n";

        // topを進める（循環）
        top = (top + 1) % 26;

        // サイズ更新
        if (count < 26)
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
            int popIndex = (top - 1 + 26) % 26;

            std::cout << "Pop : " << data[popIndex] << "  数=" << num[popIndex] << "\n";

            // topを戻す
            top = popIndex;
            count--;
        }

        std::cout << "DATA : "; //スタックの一覧
        for (int i = 0; i < count; i++)
        {
            std::cout << "[" << data[i] << ":" << num[i] << "] ";
        }
        std::cout << "\n\n";

        frame++;
    }

    return 0;
}
