#include <iostream>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    unsigned long long n, k;
    std::cin >> n >> k;

    const unsigned long long half = n % 2 == 0 ? n / 2 : n / 2 + 1;

    unsigned long long numberAtK = k <= half ? 2 * k - 1 : (k - half) * 2;

    std::cout << numberAtK << '\n';
}