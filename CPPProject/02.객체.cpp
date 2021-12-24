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
	Fish(int color) // 생성자 
	{
		// this는 인스턴스를 가르키는 스페셜 포인터다. (보통 다 생략되어 있다.)
		this->nColor = nColor;
		this->nCount++;
	};
	static void PrintCount()
	{
		// nColor++; // 에러 
		cout << "오늘 팔린 빵 갯수 : " << nCount << endl;
	}
	int nColor = 10;
	static int nCount;

};

int Fish::nCount = 0;


class PERSON
{
private:
	int money; // int money = 100; --> c11++ 부터 지원함 
public:

	int nAge;
	string strName;

	// 생성자, 소멸자는 반드시 public으로 만들어야 한다.
	// 생성자, 소멸자는 void 이런 거 없어도 된다. 스페셜함수임.

	PERSON() {}; // 생성자 
	PERSON(int a) {}; // 생성자 
	PERSON(double a) {}; // 생성자 

	~PERSON() { cout << "소멸자" << endl; }; // 소멸자 

	void PrintPerson();
	int GetMoney() { return money; };
	void SetMoney(int a) { if (a < 0) return; money = a; };

	//{
	//	money = 100;
	//	cout << "나의 이름은" << strName << "나이는 " << nAge << endl;
	//	cout << "잔고는 " << money << "원 입니다." << endl;
	//}
};

void PERSON::PrintPerson()
{
	cout << "나의 이름은 " << strName << "나이는 " << nAge << endl;
	cout << "잔고는 " << money << "원 입니다." << endl;
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
	// 구조체 vs 객체
	if (0)
	{
		HUMAN a;
		a.nAge = 20;
		// a.name = "홍길동";
		strcpy_s(a.name, 20, "홍길동");
		cout << a.nAge << "," << a.name << endl;

		int z; // 4바이트 메모리 할당 

		PERSON b; // 객체의 메모리 할당 --> 생성자 호출 PERSON() 
		printf("size of PERSON CLASS = %d\n", sizeof(PERSON));
		b.nAge = 30;
		b.strName = "강호동";

		//cout << b << "," << b.strName << endl;
		b.PrintPerson();
	}

	// 생성자와 소멸자 
	if (0)
	{
	//	int z = 10;
	//	int zz(10);

	//	// a랑 b는 인스턴스(instance)
	//	PERSON a();
	//	a.nAge = 12;
	//	a.SetMoney(200);//a.mnoney = 200;
	//	a.PrintPerson();

	//	PERSON b();
	//	b.PrintPerson();
	}


	// 정적 맴버 (static)
	if (1)
	{
		Fish::nCount= 92;
		Fish::PrintCount;
	}


	cout << "메인종료" << endl;
}