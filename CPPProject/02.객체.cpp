#include <iostream>

using namespace std;

typedef struct Human
{
	int nAge;
	char name[32];
}HUMAN;

class Fish
{
public:
	Fish(int color) // ������ 
	{
		// this�� �ν��Ͻ��� ����Ű�� ����� �����ʹ�. (���� �� �����Ǿ� �ִ�.)
		this->nColor = nColor;
		this->nCount++;
	};
	static void PrintCount()
	{
		// nColor++; // ���� 
		cout << "���� �ȸ� �� ���� : " << nCount << endl;
	}
	int nColor = 10;
	static int nCount;

};

int Fish::nCount = 0;


class PERSON
{
private:
	int money; // int money = 100; --> c11++ ���� ������ 
public:

	int nAge;
	string strName;

	// ������, �Ҹ��ڴ� �ݵ�� public���� ������ �Ѵ�.
	// ������, �Ҹ��ڴ� void �̷� �� ��� �ȴ�. ������Լ���.

	PERSON() {}; // ������ 
	PERSON(int a) {}; // ������ 
	PERSON(double a) {}; // ������ 

	~PERSON() { cout << "�Ҹ���" << endl; }; // �Ҹ��� 

	void PrintPerson();
	int GetMoney() { return money; };
	void SetMoney(int a) { if (a < 0) return; money = a; };

	//{
	//	money = 100;
	//	cout << "���� �̸���" << strName << "���̴� " << nAge << endl;
	//	cout << "�ܰ�� " << money << "�� �Դϴ�." << endl;
	//}
};

void PERSON::PrintPerson()
{
	cout << "���� �̸��� " << strName << "���̴� " << nAge << endl;
	cout << "�ܰ�� " << money << "�� �Դϴ�." << endl;
}

PERSON::PERSON()
{

}

PERSON::PERSON(int a)
{

}

PERSON::PERSON(double a)
{

}

int main()
{
	// ����ü vs ��ü
	if (0)
	{
		HUMAN a;
		a.nAge = 20;
		// a.name = "ȫ�浿";
		strcpy_s(a.name, 20, "ȫ�浿");
		cout << a.nAge << "," << a.name << endl;

		int z; // 4����Ʈ �޸� �Ҵ� 

		PERSON b; // ��ü�� �޸� �Ҵ� --> ������ ȣ�� PERSON() 
		printf("size of PERSON CLASS = %d\n", sizeof(PERSON));
		b.nAge = 30;
		b.strName = "��ȣ��";

		//cout << b << "," << b.strName << endl;
		b.PrintPerson();
	}

	// �����ڿ� �Ҹ��� 
	if (0)
	{
	//	int z = 10;
	//	int zz(10);

	//	// a�� b�� �ν��Ͻ�(instance)
	//	PERSON a();
	//	a.nAge = 12;
	//	a.SetMoney(200);//a.mnoney = 200;
	//	a.PrintPerson();

	//	PERSON b();
	//	b.PrintPerson();
	}


	// ���� �ɹ� (static)
	if (1)
	{
		Fish::nCount= 92;
		Fish::PrintCount;
	}


	cout << "��������" << endl;
}