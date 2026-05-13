#include <iostream>

int main() 
{
    // * Get user input
    int n, k;

    std::cin >> n;
    std::cin >> k;
    std::cin.ignore();

    const int kIndex = k - 1;
    int kIndexScore = 0;

    // Where first index score is 0, then there is 0 participants going to second round
    bool isAllZerosCase = false;
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // Get Score
        int score;
        std::cin >> score;
        
        // ! All zeros case
        if (isAllZerosCase) continue;
        if (i == 0 && score == 0) 
        {
            isAllZerosCase = true;
            continue;
        }
        
        // * Count
        if (i == kIndex) kIndexScore = score;

        if ((i <= kIndex || kIndexScore == score) && score != 0)
            count++;
    }

    std::cout << count << '\n';

}