#include <iostream>
#include <algorithm>
int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string word;
    std::cin >> word;

    int numberOfUppercase = 0;
    for (char c : word)
    {
        if (c < 'a')
            numberOfUppercase++;
    }

    int numberOfLowercase = word.size() - numberOfUppercase;

    if (numberOfLowercase >= numberOfUppercase)
        std::transform(word.begin(), word.end(), word.begin(), [](char c) { return tolower(c); });
    else
        std::transform(word.begin(), word.end(), word.begin(), [](char c) { return toupper(c); });

    std::cout << word << '\n';
}