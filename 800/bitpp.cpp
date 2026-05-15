#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    int x = 0;

    for (int i = 0; i < n; i++)
    {
        std::string statement;
        std::cin >> statement;

        if (statement.starts_with("++") || statement.ends_with("++"))
        {
            x++;    
        } 
        else if (statement.starts_with("--") || statement.ends_with("--"))
        {
            x--;
        }
    }

    std::cout << x << '\n';
}