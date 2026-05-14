#include <iostream>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int firstBananaCost, solidierBalance, numberOfBananas;
    std::cin >> firstBananaCost >> solidierBalance >> numberOfBananas;

    int sumOfCost = 0;
    for (int i = 0; i < numberOfBananas; i++)
    {
        sumOfCost += (i+1) * firstBananaCost;
    }

    std::cout << (sumOfCost <= solidierBalance ? 0 : sumOfCost - solidierBalance) << '\n';
}