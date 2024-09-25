// 924-DataStructures-ArrayExercice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <array>
#include <iostream>

#include "array_functions.h"

int main()
{

	std::array<int, 10> numbers = { 0, 0, 0, 0, 0, 0, 0, 0, 0};
	//std::array<int, 10> numbers2 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	FillRandom(numbers);
	Display(numbers);

	numbers = Reverse(numbers);
	Display(numbers);

	//Display(numbers2);

}

