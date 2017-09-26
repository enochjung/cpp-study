#include <iostream>

using namespace std;

int main()
{
	int sum = 0;

	for(int i=1; i<=5; i++)
	{
		int value;
		cout << i << "번째 정수 입력: ";
		cin >> value;
		sum += value;
	}
	cout << "합계: " << sum << endl;

	return 0;
}
