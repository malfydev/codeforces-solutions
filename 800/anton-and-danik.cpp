#include <iostream>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::string results;
    std::cin >> results;

    int antonWins = 0, danikWins = 0;

    for (char c : results)
    {
        if (c == 'A') antonWins++;
        else danikWins++;
    }

    const char* winner = antonWins > danikWins 
            ? "Anton" 
            : (antonWins < danikWins ? "Danik" : "Friendship");

    std::cout << winner << '\n';
}