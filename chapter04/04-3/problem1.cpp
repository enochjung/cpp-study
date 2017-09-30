#include <iostream>

using namespace std;

class Point
{
public:
	Point(int x, int y) : xpos(x), ypos(y) {}

	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}

private:
	int xpos, ypos;
};

class Circle
{
public:
	Circle(int x, int y, int r) : center(x, y), radius(r) {}

	void ShowCircleInfo() const
	{
		cout << "radius: " << radius << endl;
		center.ShowPointInfo();
	}

private:
	Point center;
	int radius;
};

class Ring
{
public:
	Ring(int innerX, int innerY, int innerR, int outerX, int outerY, int outerR) : inner(innerX, innerY, innerR), outer(outerX, outerY, outerR) {}

	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		inner.ShowCircleInfo();
		cout << "Outer Circle Info..." << endl;
		outer.ShowCircleInfo();
	}

private:
	Circle inner;
	Circle outer;
};

int main()
{
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}
