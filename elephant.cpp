#include <iostream>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int x;
    std::cin >> x;

    int steps = x / 5;
    if (x % 5 != 0) steps++;

    std::cout << steps << '\n';
}