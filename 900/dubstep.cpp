#include <iostream>
#include <string>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string song;
    std::cin >> song;

    std::string original;
    original.reserve(song.size());

    for (int i = 0; i < song.size(); i++)
    {
        if (i + 2 < song.size() && song[i] == 'W' && song[i+1] == 'U' && song[i+2] == 'B')
        {
            if (i != 0 && i != song.size() - 3)
                original.append(" ");

            i+=2;
        }
        else 
        {
            original += song[i];
        }
    }

    std::cout << original << '\n';
}