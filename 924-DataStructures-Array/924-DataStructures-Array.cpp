// 924-DataStructures-Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define array_size 10

void Display(int number)
{
	std::cout << "number tt seul \n";
	std::cout << "number=" << ":" << number << '\n';
}
void Affect(int& number)
{
	std::cout << "number tt seul \n";
	number = rand();
	Display(number);
}

void Display(int numbers[array_size])
{
	// lecture
	std::cout << "\nLecture\n";
	for(int idx = 0; idx < array_size; idx++)
	{
		std::cout << "idx=" << idx << ":" << numbers[idx] << '\n';
	}
}

void Affect(int numbers[array_size])
{
	// Ecriture
	std::cout << "\nEcriture\n";
	for(int idx = 0; idx < array_size; idx++)
	{
		numbers[idx] = rand();
	}
}

int main()
{
	int numbers[array_size] = {1,2,3,4};
	int numbers2[array_size] = {10,20,30,40};

	Display(numbers);
	Display(numbers2);

	// ecriture
	Affect(numbers);
	Affect(numbers2);

	Display(numbers);
	Display(numbers2);


	int myNumber = 34;
	Display(myNumber);
	Affect(myNumber);
	Display(myNumber);


	std::cout << "Ouf !!!!!!!!!!!!" << '\n';

}
