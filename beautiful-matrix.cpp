#include <iostream>

const int MATRIX_LENGTH = 5;
const int MATRIX_CENTER = 2;

int main()
{
    int x = -1, y = -1;

    for(int i = 0; i < MATRIX_LENGTH; i++)
    {
        for (int j = 0; j < MATRIX_LENGTH; j++)
        {
            int cell = 0;
            std::cin >> cell;

            if (cell == 1)
            {
                x = j;
                y = i;
            }
        }
    }

    int moves = abs(x - MATRIX_CENTER) + abs(y - MATRIX_CENTER);
    std::cout << moves << '\n';
}