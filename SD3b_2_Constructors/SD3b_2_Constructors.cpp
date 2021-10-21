// SD3b_2_Constructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

class Point2D {
private:
	int x, y;

public:
	Point2D(int x, int y) : x(x), y(y) {
		cout << "constructing..." << endl;
	}
	~Point2D() {
		cout << "destructing..." << endl;
	}

#pragma region Get/Set & toString
	int getX() const { return x; }
	int getY() const { return y; }
	string toString() const { return x + "," + y; }
#pragma endregion
};

int main()
{
}