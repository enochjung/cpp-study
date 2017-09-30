#include <iostream>

using namespace std;

class Calculator
{
public:
	void Init()
	{
		cnt_add = 0;
		cnt_min = 0;
		cnt_mul = 0;
		cnt_div = 0;
	}
	float Add(float x, float y)
	{
		cnt_add++;
		return x+y;
	}
	float Min(float x, float y)
	{
		cnt_min++;
		return x-y;
	}
	float Mul(float x, float y)
	{
		cnt_mul++;
		return x*y;
	}
	float Div(float x, float y)
	{
		cnt_div++;
		return x/y;
	}
	void ShowOpCount()
	{
		cout << "덧셈:" << cnt_add << " 뺄셈:" << cnt_min << " 곱셈:" << cnt_mul <<" 나눗셈:" << cnt_div << endl;
	}

private:
	int cnt_add;
	int cnt_min;
	int cnt_mul;
	int cnt_div;
};

int main()
{
	Calculator cal;
	cal.Init();
	cout << "3.2+2.4=" << cal.Add(3.2,2.4) << endl;
	cout << "3.5/1.7=" << cal.Div(3.5,1.7) << endl;
	cout << "2.2-1.5=" << cal.Min(2.2,1.5) << endl;
	cout << "4.9/1.2=" << cal.Div(4.9,1.2) << endl;
	cal.ShowOpCount();
	return 0;
}
