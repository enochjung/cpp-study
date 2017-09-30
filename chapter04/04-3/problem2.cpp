#include <iostream>
#include <string>

using namespace std;

namespace COMP_POS
{
	enum {CLERK, SENIOR, ASSIST, MANAGER};

	string name_of_position(int position)
	{
		switch(position)
		{
		case CLERK: return "사원";
		case SENIOR: return "대리";
		case ASSIST: return "주임";
		case MANAGER: return "매니저";
		}
		return "";
	}
}

class NameCard
{
public:
	NameCard(string name, string company_name, string phone_number, int company_position)
	{
		this->name = name;
		this->company_name = company_name;
		this->phone_number = phone_number;
		this->company_position = company_position;
	}

	void ShowNameCardInfo()
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << company_name << endl;
		cout << "전화번호: " << phone_number << endl;
		cout << "직급: " << COMP_POS::name_of_position(company_position) << endl << endl;
	}

private:
	string name;
	string company_name;
	string phone_number;
	int company_position;
};

int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}
