#include <iostream>
#include <algorithm>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n, k;
    std::cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        int lastDigit = n % 10;

        if (lastDigit == 0)
            n /= 10;
        else 
            n--;
    }

    std::cout << n << '\n';
}