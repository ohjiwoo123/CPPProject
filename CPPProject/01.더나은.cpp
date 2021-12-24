#include <stdio.h>//C
#include <stdlib.h>//C
#include <iostream>//C++

using namespace std;

//void Swap1(int x, int y)
//{
//	int temp;
//	temp = x;
//	int x = y;
//}
//
//void Swap2(int* x, int* y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//void Swap3(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}



int Sum(int a,int b)
{
	std::cout << "Sum(int,int) :" << endl;
	return a + b;
}

int Sum(int a, int b, int c)
{
	std::cout << "Sum(int,int,int) :" << endl;
	return a + b + c;
}

namespace TEST
{
	int X = 10;
	void CoreAlgol(int X)
	{
		cout << X << endl;
	}
}

int X = 100;

void CoreAlgol(int X)
{
	cout << X << endl;
}

int main()
{
	//cout 객체
	if (0)
	{
		int age = 20;
		printf("안녕\n");
		std::cout << "hello\n";
		std::cout << 3 + 5 << std::endl;
		std::cout << "저는" << age << "살입니다";

		cout << "반가워" << endl;
	}
	//cin 객체
	if (0)
	{
		int age;
		cout << "나이를 입력하세요" << endl;
		cin >> age;

		char name[30];
		cout << "이름을 입력하세요" << endl;
		cin >> name;

		cout << "당신의 이름은 " << name << endl;
		cout << "당신의 나이는 " << age << endl;
	}
	//auto
	if (0)
	{
		int a = 10;
		int b(a);//a값을 카피하는 값을 불러다 b에 넣어라
		auto c(a);//a값에 따라 int, float, char 등등 알아서 auto로 해라 

		cout << a << ":" << sizeof(a) << endl;
		cout << b << ":" << sizeof(a) << endl;
		cout << c << ":" << sizeof(a) << endl;

	}
	//범위기반 for문
	if (0)
	{
		int aList[10] = { 10,20,30,40,50,60,70 };// 중간에 값을 집어넣어도 알아서 5->10으로 바꿔준다
		//전형적인 C스타일 반복문
		for (int i = 0; i < 5; i++)
			cout << aList[i] << ' ';
		cout << endl;

		////범위기반 for문
		for (int n : aList)// aList에있는 int 전부다 하나씩 꺼내서 집어 넣겠다. until 값이 안나올때까지
			cout << n << ' ';
		cout << endl;

		for (auto n : aList)// aList에있는 타입 알아서 auto로 맞춰 꺼내준다
			cout << n << ' ';

	}

	// 레퍼런스(참조,별명)
	if (0)
	{
		int a = 10;
		int* b = &a;
		int& c = a; // 별명 연산자 레퍼런스, c는 메모리가 잡힌 게 아니다. (a 메모리랑 같다)

		cout << a << endl;
		cout << c << endl;

		c++;
		cout << a << endl;
		cout << c << endl;

		a = a + 100;
		cout << a << endl;
		cout << c << endl;

		int d = 999;
		c = d;
		cout << c << endl;
		cout << d << endl;
	}
	// 함수 호출 1, 2, 3
	if (0)
	{

		//// 1. call by Value
		//int a;
		//int b;
		//cout << "호출 전 : " << a << ", " << b << endl;
		//Swap1(a, b); // call by Value
		//cout << "호출 전 : " << a << ", " << b << endl;

		////-----------------------
		//// 2. call by address 
		//int a*;
		//int b*;
		//a = 10;
		//b = 20;
		//cout << "호출 전 : " << a << ", " << b << endl;
		//Swap2(&a, &b); // call by address 
		//cout << "호출 전 : " << a << ", " << b << endl;

		////------------------------
		//// 3. call by reference
		//a = 10;
		//b = 20;
		//cout << "호출 전 : " << a << ", " << b << endl;
		//Swap3(a, b); // call by reference
		//cout << "호출 전 : " << a << ", " << b << endl;
	}

	// 함수 오버로딩 
	if (0)
	{
		//cout << Sum(3, 4) << endl;
		//cout << Sum(3.14, 4.77) << endl;
		//cout << Sum(3, 4, 5) << endl;
		//Sum(3, 4, 5);
	}

	// 디폴트 인자 (디폴트 매개변수)
	if (0)
	{
		//CoreAlgol(10, 20);
		//CoreAlgol(10, 20, 30);
		//CoreAlgol(10, 20, 30, 40);
	}

	// 네임 스페이스 (같은 함수 이름이 있으면 네임 스페이스 이용하여 이름을 바꾼다.)
	if (0)
	{
		//CoreAlgol(10, 20); // 글로벌 
		//::CoreAlgol(10, 20); // 글로벌 
		//TEST::CoreAlgol(1, 2); // :: 네임스페이스

		cout << X << endl;
		cout << TEST::X << endl;
	}

	// 동적 메모리 할당(MALLOC) 연산자 
	if (1)
	{
		// C언어 : malloc() / free()
		// C++ : new / delete

		// 1개
		int* p = (int*)malloc(sizeof(int) * 8);
		p[0] = 20;
		free(p);

		// 여러개
		int* pp = new int[5];
		pp[20] = 20;
		delete pp;

	}
}