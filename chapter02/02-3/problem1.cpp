#include <iostream>

using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *pt = new Point;
	pt->xpos = p1.xpos + p2.xpos;
	pt->ypos = p1.ypos + p2.ypos;
	return *pt;
}

int main()
{
	Point *p1 = new Point;
	p1->xpos = 1;
	p1->ypos = 2;

	Point *p2 = new Point;
	p2->xpos = 10;
	p2->ypos = 20;

	Point &pt = PntAdder(*p1, *p2);

	cout << pt.xpos << ' ' << pt.ypos << endl;

	delete p1;
	delete p2;
	delete &pt;
	return 0;
}
