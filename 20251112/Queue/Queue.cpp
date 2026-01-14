#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    std::srand((unsigned int)std::time(nullptr));

    const int DATASIZE = 26;
    char data[DATASIZE];

    int head = 0;   // 先頭（Pop位置）
    int tail = 0;   // 末尾（Push位置）
    int count = 0;  // 要素数

    char currentChar = 'A';
    int frame = 0;
    int maxframe = 50;

    for (char c = 'A'; c <= 'Z'; ++c)
    {
        std::cout << "フレーム " << frame + 1 << "\n";


        data[tail] = currentChar;       //Queue

        std::cout << "Queue : " << currentChar << "\n";

        tail = (tail + 1) % DATASIZE;
        count++;

        currentChar++;

        if (count > 0 && std::rand() % 2 == 0)
        {
            std::cout << "Dequeue : " << data[head] << "\n";

            // headを進める
            head = (head + 1) % DATASIZE;       //DeQueue
            count--;
        }

        std::cout << "DATA : ";
        for (int i = 0; i < count; i++)
        {
            int index = (head + i) % 26;
            std::cout << "[" << data[index] << "] ";
        }
        std::cout << "\n\n";

        frame++;
    }

    return 0;
}
