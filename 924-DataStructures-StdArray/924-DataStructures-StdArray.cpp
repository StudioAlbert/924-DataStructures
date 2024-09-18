// 924-DataStructures-StdArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <array>
#include <iostream>

void DisplayArray(std::array<int, 6> numbers)
{
	for(int idx = 0; idx < numbers.size(); idx++)
	{
		std::cout << "idx " << idx << " = " << numbers.at(idx) << '\n';
	}
}

void Reset(std::array<int, 6> array)
{
    for (auto oneNumber : array)
    {
        oneNumber = 0;
    }
}

int main()
{
    std::array<int, 6> numbers;

    numbers.fill(45);
    numbers.at(0) = 113;


    DisplayArray(numbers);

    Reset(numbers);

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

