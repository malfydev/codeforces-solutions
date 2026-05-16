#include <iostream>
#include <memory.h>

// FROM 1 TO 100 to decrease complexity
const int COIN_ARRAY_LEN = 101;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    std::cin.ignore();

    unsigned char numberOfCoins[COIN_ARRAY_LEN];
    memset(numberOfCoins, 0, COIN_ARRAY_LEN);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int value;
        std::cin >> value;

        numberOfCoins[value]++;
        sum += value;
    }

    const int requiredMinimum = sum / 2 + 1;
    
    int mySum = 0;
    int coinsITook = 0;

    for (int i = COIN_ARRAY_LEN - 1 ; i > 0; i--)
    {
        if (mySum >= requiredMinimum) break;
        if (numberOfCoins[i] == 0) continue;

        for (int j = 0; j < numberOfCoins[i]; j++)
        {
            mySum += i;
            coinsITook++;

            if (mySum >= requiredMinimum) break;
        }
    }

    std::cout << coinsITook << '\n';
}