#include <iostream>
#include <cstring>

using namespace std;

namespace COMP_POS
{
	enum {CLERK, SENIOR, ASSIST, MANAGER};

	const char* name_of_position(const int position)
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
	NameCard(const char* name, const char* company_name, const char* phone_number, int company_position)
	{
		this->name = new char[strlen(name)+1];
		this->company_name = new char[strlen(company_name)+1];
		this->phone_number = new char[strlen(phone_number)+1];
		strcpy(this->name, name);
		strcpy(this->company_name, company_name);
		strcpy(this->phone_number, phone_number);
		this->company_position = company_position;
	}

	NameCard(NameCard &copy)
	{
		name = new char[strlen(copy.name)+1];
		company_name = new char[strlen(copy.company_name)+1];
		phone_number = new char[strlen(copy.phone_number)+1];
		strcpy(name, copy.name);
		strcpy(company_name, copy.company_name);
		strcpy(phone_number, copy.phone_number);
		company_position = copy.company_position;
	}

	void ShowNameCardInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << company_name << endl;
		cout << "전화번호: " << phone_number << endl;
		cout << "직급: " << COMP_POS::name_of_position(company_position) << endl << endl;
	}

	~NameCard()
	{
		delete[] name;
		delete[] company_name;
		delete[] phone_number;
		name = nullptr;
		company_name = nullptr;
		phone_number = nullptr;
	}

private:
	char* name;
	char* company_name;
	char* phone_number;
	int company_position;
};

int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSenior;

	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();

	return 0;
}
