#include <iostream>
#include <unordered_set>

int main()
{
    std::string name;
    std::cin >> name;

    std::unordered_set<char> characterSet;
    characterSet.insert(name.begin(), name.end());

    if (characterSet.size() % 2 == 0) std::cout << "CHAT WITH HER!\n";
    else std::cout << "IGNORE HIM!\n";
}