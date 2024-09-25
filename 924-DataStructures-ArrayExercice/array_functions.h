#ifndef ARRAY_FUNCTIONS_H
#define ARRAY_FUNCTIONS_H

#include <array>

std::array<int, 10> FillRandom()
{
	std::array<int, 10> results;

	for (int& r : results)
	{
		r = rand();
	}

	return results;
}

void FillRandom(std::array<int, 10>& array_to_fill)
{
	for(int& a : array_to_fill)
	{
		a = rand();
	}
}

void Display(std::array<int, 10> array_to_display)
{
	for (int one_number_display : array_to_display)
	{
		std::cout << one_number_display << '\t';
	}
	std::cout << '\n';
}

std::array<int, 10> Reverse(std::array<int, 10> input_array)
{
	std::array<int, 10> reversed_array;

	// Reverse Magic stuff !!
	
	//for(int fwdIdx = 0; fwdIdx < input_array.size(); fwdIdx++)
	//{
	//	// 1 : Display in console a reverse index of the first array
	//	//int reverseIdx = input_array.size() - 1 - fwdIdx;
	//	//std::cout << reverseIdx << '\t';

	//	// 2 : Use the reverse index to put values in the reversed array
	//	reversed_array[input_array.size() - 1 - fwdIdx] = input_array[fwdIdx];

	//}

	for(int revIdx = input_array.size() - 1; revIdx >= 0; revIdx--)
	{
		std::cout << revIdx << '\t';
		reversed_array[revIdx] = input_array[input_array.size() - (revIdx + 1)];
	}

	std::cout << '\n';

	return reversed_array;
}

#endif // ARRAY_FUNCTIONS_H
