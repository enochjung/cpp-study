#include <iostream>
#include <string>

using namespace std;

class Printer
{
public:
	void SetString(const char* str)
	{
		m_str = str;
	}
	void ShowString()
	{
		cout << m_str << endl;
	}

private:
	string m_str;
};

int main()
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}
