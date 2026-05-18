#include <iostream>

int main() 
{
    int n, m;
    std::cin >> n >> m;

    std::cout << (std::min(n, m) % 2 == 1 ? "Akshat\n" : "Malvika\n");
}