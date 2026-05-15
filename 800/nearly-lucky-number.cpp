#include <iostream>
#include <cmath>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    unsigned long long number;
    std::cin >> number;

    int numberOfLuckyDigits = 0;
    while(number != 0)
    {
        int currentDigit = number % 10;
        if (currentDigit == 4 || currentDigit == 7)
            numberOfLuckyDigits++;

        number /= 10;
    }

    std::cout << (numberOfLuckyDigits == 4 || numberOfLuckyDigits == 7 ? "YES\n" : "NO\n"); 
}