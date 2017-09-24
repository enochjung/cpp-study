#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name, phone;

	cout << "이름을 입력해 주세요: ";
	cin >> name;
	cout << "핸드폰 번호를 입력해 주세요: ";
	cin >> phone;
	
	cout << "이름: " << name << endl << "번호: " << phone << endl;
	return 0;
}
