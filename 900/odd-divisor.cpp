#include <iostream>

int main() 
{
    int n;
    std::cin >> n;

    unsigned long long* numbers = new unsigned long long[n];
    for (int i = 0; i < n; i++)
        std::cin >> numbers[i];



    
    for (int i = 0; i < n; i++)
    {
        unsigned long long currentNumber = numbers[i];

        while (currentNumber % 2 == 0) currentNumber /= 2;

        std::cout << (currentNumber > 1 ? "YES\n" : "NO\n"); 
    }
}