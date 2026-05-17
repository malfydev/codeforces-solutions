#include <iostream>
#include <algorithm>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int numberOfStudents, numberOfPuzzles;
    std::cin >> numberOfStudents >> numberOfPuzzles;

    int* puzzles = new int[numberOfPuzzles];
    for (int i = 0; i < numberOfPuzzles; i++)
    {
        std::cin >> puzzles[i];
    }

    std::sort(puzzles, puzzles + numberOfPuzzles);

    int minDifference = puzzles[numberOfStudents - 1] - puzzles[0];

    for (int i = 1; i < numberOfPuzzles - numberOfStudents+1; i++)
    {
        int currentDifference = puzzles[i+numberOfStudents-1] - puzzles[i];

        if (minDifference > currentDifference) 
            minDifference = currentDifference;
    }

    std::cout << minDifference << '\n';
}