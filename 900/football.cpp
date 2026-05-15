#include <iostream>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string team;
    std::cin >> team;

    int count = 1;

    char last = team.at(0);
    for (int i = 1; i < team.size(); i++)
    {
        char current = team.at(i);

        if (current == last)
            count++;
        else 
            count = 1;

        if (count == 7)
        {
            std::cout << "YES\n";
            return 0;
        }

        last = current;
    }

    std::cout << "NO\n";
}