#include <iostream>
#include <algorithm>

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int columns;
    std::cin >> columns;

    int* boxes = new int[columns];

    for (int i = 0; i < columns; i++)
        std::cin >> boxes[i];

    std::sort(boxes, boxes + columns);

    for (int i = 0; i < columns; i++) 
        std::cout << boxes[i] << ' ';
}