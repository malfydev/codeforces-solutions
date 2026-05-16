#include <iostream>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string p;
    std::cin >> p;

    for (char c : p)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            std::cout << "YES\n";
            
            return 0;
        }
    }

    std::cout << "NO\n";
}