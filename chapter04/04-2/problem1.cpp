#include <iostream>

using namespace std;

class Point
{
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

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
	void Init(int x, int y, int r)
	{
		center.Init(x, y);
		radius = r;
	}

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
	void Init(int innerX, int innerY, int innerR, int outerX, int outerY, int outerR)
	{
		inner.Init(innerX, innerY, innerR);
		outer.Init(outerX, outerY, outerR);
	}

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
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}
