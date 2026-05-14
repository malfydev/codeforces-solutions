#include <iostream>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    std::cin.ignore();

    char lastStone;
    std::cin >> lastStone;

    int numberOfStonesToRemove = 0;

    for (int i = 1; i < n; i++)
    {
        char currentStone;
        std::cin >> currentStone;

        if (currentStone == lastStone) 
            numberOfStonesToRemove++;

        lastStone = currentStone;
    }

    std::cout << numberOfStonesToRemove << '\n';
}