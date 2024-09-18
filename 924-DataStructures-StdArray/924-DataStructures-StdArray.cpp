// 924-DataStructures-StdArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <array>
#include <iostream>

int main()
{
    std::array<int, 6> numbers;

    numbers.fill(45);
    numbers.at(0) = 113;


    for(int idx = 0; idx < numbers.size(); idx++)
    {
        std::cout << "idx " << idx << " = " << numbers.at(idx) << '\n';
    }

    for (auto oneNumber : numbers)
    {
        oneNumber = 0;
    }

    for (auto oneNumber : numbers)
    {
        std::cout << oneNumber << '\n';
    }

    for (int idx = 0; idx < numbers.size(); idx++)
    {
        numbers.at(idx) = 0;
        numbers[idx] = 0;
    }
    for(auto oneNumber : numbers)
    {
        std::cout << oneNumber << '\n';
    }


    // Tile Row = 3, Column = 6

    std::array<std::array<int, 10>, 10> pixels;
    pixels[3][6] = 1;

    std::array<int, 100> pixels2;

    return EXIT_SUCCESS;

}

