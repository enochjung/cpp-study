#include <iostream>

using namespace std;

int main()
{
	while(1)
	{
		int money;

		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> money;
		if(money == -1)
			break;
		cout << "이번 달 급여: " << (int)(money*0.12)+50 << "만원" << endl;
	}

	cout << "프로그램을 종료합니다." << endl;
	return 0;
}
