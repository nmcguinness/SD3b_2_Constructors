// SD3b_2_Constructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

class Point2D {
private:
	int x, y;

public:
	Point2D(int x, int y) : x(x), y(y) {}
	~Point2D() {}

	int getX() const { return x; }
	int getY() const { return y; }

	string toString() const { return x + "," + y; }
};

int main()
{
	std::cout << "Hello World!\n";
}