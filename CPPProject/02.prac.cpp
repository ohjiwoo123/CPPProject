#include <iostream>

using namespace std;

class DAYS{
private:
	int month;
public:
	DAYS() 
	{

	};
	~DAYS() 
	{

	};
	int GetMonth();
	int SetMonth();
};

int DAYS::GetMonth() 
{
	month = 3;
	cout << "SetMonth���� ���� ���� " << month << "�Դϴ�. " << endl;
	return month;
}

int DAYS::SetMonth()
{
	month = 3;
	cout << "month�� ������ ���� " << month << "�Դϴ�. " << endl;
	return month;
}

int main()
{
	DAYS a;
	a.GetMonth();
	a.SetMonth();


	cout << "��������" << endl;
}