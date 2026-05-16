#include <iostream>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    int maxStreak = 1;
    int currentStreak = 1;

    int lastNumber;
    std::cin >> lastNumber;
    std::cin.ignore();

    for (int i = 1; i < n; i++)
    {
        int currentNumber;
        std::cin >> currentNumber;

        if (lastNumber <= currentNumber)
        {
            currentStreak++;
        }
        else if (currentStreak > maxStreak)
        {
            maxStreak = currentStreak;
            currentStreak = 1;
        }
        else
        {
            currentStreak = 1;
        }

        lastNumber = currentNumber;
    }

    std::cout << std::max(currentStreak, maxStreak) << '\n';
}