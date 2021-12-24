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
	//cout ��ü
	if (0)
	{
		int age = 20;
		printf("�ȳ�\n");
		std::cout << "hello\n";
		std::cout << 3 + 5 << std::endl;
		std::cout << "����" << age << "���Դϴ�";

		cout << "�ݰ���" << endl;
	}
	//cin ��ü
	if (0)
	{
		int age;
		cout << "���̸� �Է��ϼ���" << endl;
		cin >> age;

		char name[30];
		cout << "�̸��� �Է��ϼ���" << endl;
		cin >> name;

		cout << "����� �̸��� " << name << endl;
		cout << "����� ���̴� " << age << endl;
	}
	//auto
	if (0)
	{
		int a = 10;
		int b(a);//a���� ī���ϴ� ���� �ҷ��� b�� �־��
		auto c(a);//a���� ���� int, float, char ��� �˾Ƽ� auto�� �ض� 

		cout << a << ":" << sizeof(a) << endl;
		cout << b << ":" << sizeof(a) << endl;
		cout << c << ":" << sizeof(a) << endl;

	}
	//������� for��
	if (0)
	{
		int aList[10] = { 10,20,30,40,50,60,70 };// �߰��� ���� ����־ �˾Ƽ� 5->10���� �ٲ��ش�
		//�������� C��Ÿ�� �ݺ���
		for (int i = 0; i < 5; i++)
			cout << aList[i] << ' ';
		cout << endl;

		////������� for��
		for (int n : aList)// aList���ִ� int ���δ� �ϳ��� ������ ���� �ְڴ�. until ���� �ȳ��ö�����
			cout << n << ' ';
		cout << endl;

		for (auto n : aList)// aList���ִ� Ÿ�� �˾Ƽ� auto�� ���� �����ش�
			cout << n << ' ';

	}

	// ���۷���(����,����)
	if (0)
	{
		int a = 10;
		int* b = &a;
		int& c = a; // ���� ������ ���۷���, c�� �޸𸮰� ���� �� �ƴϴ�. (a �޸𸮶� ����)

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
	// �Լ� ȣ�� 1, 2, 3
	if (0)
	{

		//// 1. call by Value
		//int a;
		//int b;
		//cout << "ȣ�� �� : " << a << ", " << b << endl;
		//Swap1(a, b); // call by Value
		//cout << "ȣ�� �� : " << a << ", " << b << endl;

		////-----------------------
		//// 2. call by address 
		//int a*;
		//int b*;
		//a = 10;
		//b = 20;
		//cout << "ȣ�� �� : " << a << ", " << b << endl;
		//Swap2(&a, &b); // call by address 
		//cout << "ȣ�� �� : " << a << ", " << b << endl;

		////------------------------
		//// 3. call by reference
		//a = 10;
		//b = 20;
		//cout << "ȣ�� �� : " << a << ", " << b << endl;
		//Swap3(a, b); // call by reference
		//cout << "ȣ�� �� : " << a << ", " << b << endl;
	}

	// �Լ� �����ε� 
	if (0)
	{
		//cout << Sum(3, 4) << endl;
		//cout << Sum(3.14, 4.77) << endl;
		//cout << Sum(3, 4, 5) << endl;
		//Sum(3, 4, 5);
	}

	// ����Ʈ ���� (����Ʈ �Ű�����)
	if (0)
	{
		//CoreAlgol(10, 20);
		//CoreAlgol(10, 20, 30);
		//CoreAlgol(10, 20, 30, 40);
	}

	// ���� �����̽� (���� �Լ� �̸��� ������ ���� �����̽� �̿��Ͽ� �̸��� �ٲ۴�.)
	if (0)
	{
		//CoreAlgol(10, 20); // �۷ι� 
		//::CoreAlgol(10, 20); // �۷ι� 
		//TEST::CoreAlgol(1, 2); // :: ���ӽ����̽�

		cout << X << endl;
		cout << TEST::X << endl;
	}

	// ���� �޸� �Ҵ�(MALLOC) ������ 
	if (1)
	{
		// C��� : malloc() / free()
		// C++ : new / delete

		// 1��
		int* p = (int*)malloc(sizeof(int) * 8);
		p[0] = 20;
		free(p);

		// ������
		int* pp = new int[5];
		pp[20] = 20;
		delete pp;

	}
}