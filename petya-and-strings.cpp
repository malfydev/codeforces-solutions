#include <iostream>

int main()
{
    std::string str1, str2;

    std::cin >> str1;
    std::cin >> str2;

    int result = 0;

    for (int i = 0; i < str1.size(); i++)
    {
        char c1 = tolower(str1.at(i));
        char c2 = tolower(str2.at(i));

        if (c1 > c2)
        {
            result = 1;
            break;
        }
        else if (c1 < c2)
        {
            result = -1;
            break;
        }
    }

    std::cout << result << '\n';
}