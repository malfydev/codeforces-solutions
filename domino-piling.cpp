#include <iostream>

int main()
{
    int m, n;
    std::cin >> m;
    std::cin >> n;
    std::cin.ignore();

    std::cout << (m * n) / 2 << '\n';
}