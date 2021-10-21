// SD3b_2_Constructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <list>
#include "SD3b_2_Constructors.h"
using namespace std;

class Point2D {
private:
	int x, y;

public:
	//constructor
	Point2D(int x, int y) : x(x), y(y) {
		cout << "constructor..." << endl;
	}
	//copy constructor
	Point2D(const Point2D& other) {
		cout << "copy constructor..." << endl;
		this->x = other.getX();
		this->y = other.getY();
	}

	~Point2D() {
		cout << "destructor..." << endl;
	}

#pragma region Get/Set & toString
	int getX() const { return x; }
	int getY() const { return y; }
	string toString() const { return x + "," + y; }
#pragma endregion
};

void demoSimpleConstructors();
void demoSimpleList();

int main()
{
	//	demoSimpleConstructors();
	demoSimpleList();
}

void demoSimpleList() {
	//make the list
	list<Point2D> pList;

	//make the points
	Point2D p1(50, 100);
	Point2D p2(640, 480);
	Point2D p3(1920, 1080);

	//add the points
	pList.push_back(p1);
	pList.push_back(p2);
	pList.push_back(p3);
}

void demoSimpleConstructors() {
	Point2D p1(50, 100);
	//Point2D p2(640, 480);
	//Point2D p3(1920, 1080);

	////cout << p1 << endl; //<< operator isnt clever enough to stringify i.e. to call toString
	//cout << p1.toString() << endl;

	//demo for copy constructor
	Point2D p4(p1); //make a DISTINCT copy of p1
}