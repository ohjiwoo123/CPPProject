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
	cout << "SetMonth에서 얻어온 값은 " << month << "입니다. " << endl;
	return month;
}

int DAYS::SetMonth()
{
	month = 3;
	cout << "month로 설정한 값은 " << month << "입니다. " << endl;
	return month;
}

int main()
{
	DAYS a;
	a.GetMonth();
	a.SetMonth();


	cout << "메인종료" << endl;
}