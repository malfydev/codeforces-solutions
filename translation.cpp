#include <iostream>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string s, t;
    std::cin >> s >> t;

    if (s.size() != t.size())
    {
        std::cout << "NO\n";
        return 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) != t.at(t.size() - i - 1))
        {
            std::cout << "NO\n";
            return 0;
        }
    }

    std::cout << "YES\n";
}