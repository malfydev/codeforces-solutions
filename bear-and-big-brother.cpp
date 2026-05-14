#include <iostream>
#include <cmath>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    // Limak, Bob weights
    int a, b;
    std::cin >> a >> b;

    int numberOfYears = (std::log((double)a / b) / std::log(2.0/3.0)) + 1;

    std::cout << numberOfYears << '\n';
}