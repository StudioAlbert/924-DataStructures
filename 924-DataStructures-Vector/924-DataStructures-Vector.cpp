// 924-DataStructures-Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Point
{
public:
	Point(int x, int y) : x_(x), y_(y)
	{
	};

public:
	int X() { return x_; }
	int Y() { return y_; }

private:
	int x_;
	int y_;

};

int main()
{

	std::vector<int> myVector(5, -1);

	// adress : 0x000001BE43B54B10
	for (int i = 0; i < 10; i++)
	{
		myVector.push_back(2 * i);
	}
	myVector.emplace_back(10);


	std::vector<Point> points;

	Point center(2, 4);
	center.X();

	points.push_back(center);
	points.emplace_back(2, 4);

	for (int i = 0; i < points.size(); ++i)
	{
		points[i].X();
	}

	for (auto p = points.begin(); p < points.end(); p++)
	{
		p->X();
	}

	for (auto p : points)
	{
		p.X();
	}



}

