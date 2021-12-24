#include <iostream>
#include "Ex_String.h"
using namespace std;

int main()
{
	// C�� ���ڿ� ó�� - char[]
	if (0)
	{
		char a = 'a'; // 1 ���� --> ����
		// char b = "a"; // 2 ���� (\n) --> ���ڿ�
		char name[30] = "ȫ�浿";
		printf("%s\n", name);
		
		strcpy_s(name, 30, "���缮");
		printf("%s\n", name);

	}
	// C++�� ���ڿ� ó�� 
	if (0)
	{
		string a; // �ʱ� �� ����
		cout << a << endl;

		a = "���缮"; // �� �� �Ҵ�
		cout << a << endl;

		string b(a); // �ʱⰪ ����
		cout << b << endl;

		string c("����ѹ�"); // �ʱ� �� ���� , ��� ���ڿ� 
		cout << c << endl;

		c.clear();
		cout << c << endl;
	}
	// ���� ���� MyString ��ü ��� 
	if (1)
	{
		MyString a;
		// a = "�ռ���";
		a.SetString("ȫ�浿");
		cout << a.GetString() << endl;

		a.SetString("���缮");
		cout << a.GetString() << endl;

		// --------------------------------
		MyString b("�ڸ��");
		cout << b.GetString() << endl;

		// --------------------------------
		MyString c(b);
		cout << c.GetString() << endl;

		c = a; // ���缮
		cout << c.GetString() << endl;

		// FunnyString
		FunnyString z;
		z.SetString("�ٺ�");
		cout << z.GetString() << endl;
	}
}