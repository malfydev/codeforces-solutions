#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::string line;
    std::cin >> line;

    std::vector<int> numbers;

    for (int i = 0; i < line.size(); i += 2)
        numbers.push_back(line.at(i) - '0');

    std::sort(numbers.begin(), numbers.end());
    
    for (int i = 0; i < numbers.size(); i++) 
    {
        std::cout << numbers[i];
        if (i != numbers.size() - 1) std::cout << "+";
    }

    std::cout << '\n';
}