#include <iostream>

using namespace std;

void my_plus(int &x)
{
	x++;
}

void change(int &x)
{
	x = -x;
}

int main()
{
	int a = 10;
	cout << a << endl;
	my_plus(a);
	cout << a << endl;
	change(a);
	cout << a << endl;
}
