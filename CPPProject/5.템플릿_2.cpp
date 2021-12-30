#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ���ø� (=�����)
// 1) �Լ� ���ø�
// 2) Ŭ���� ���ø�

template <typename T> T add(T a, T b) // �Լ� ���ø�, ���ʸ� ���α׷���
{
	return a + b;
}

/*
int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

string add(string a, string b)
{
	return a + b;
}
*/

template <typename T> T mymax(T a, T b)
{
	static int count = 0;
	count++;
	cout << "�Ҹ� Ƚ�� : " << count << endl;

	return a > b ? a : b;
}

template <typename T> void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T> class MyData
{
private:
	T m_Data;
public:
	MyData() { m_Data = 0; }
	MyData(T a) { m_Data = a; }
	~MyData() {}
	T GetData() { return m_Data; }
	void SetData(T a) { m_Data = a; }
};

struct USERDATA
{
	int age;
	string name;
};

class Friend
{
	int age;
	string name;

public:
	Friend(int a, string n) { age = a;  name = n; }
	void PrintData()
	{
		cout << name << ", " << age << "��" << endl;
	}
};

int main()
{
	// �Լ� ���ø� 1
	if (0)
	{
		cout << add(10, 20) << endl;
		// �����Ϸ��� ������ int�� ó���ϴ� add�Լ� ����
		cout << add(10.5, 20.5) << endl;
		// �����Ϸ��� ������ double�� ó���ϴ� add�Լ� ����

		string a = "���ѹα�";
		string b = "����";
		cout << add(a, b) << endl;
		// �����Ϸ��� ������ string�� ó���ϴ� add�Լ� ����
	}

	// �Լ� ���ø� 2
	if (0)
	{
		cout << mymax(10, 20) << endl; // int
		cout << mymax(30, 40) << endl; // int
		cout << mymax(100, 300) << endl;

		cout << mymax(10.5, 20.6) << endl;
		cout << mymax(1.5, 2.6) << endl;
		cout << mymax('a', 'c') << endl;

		//----------------------------------
		// ���ø� ����� ����
		cout << mymax<int>(10.5, 20.6) << endl;
	}

	// �Լ� ���ø� 3
	if (0)
	{
		int i = 50;
		int j = 10;
		cout << "Before " << "i = " << i << ", j = " << j << endl;
		myswap(i, j);
		cout << "After " << "i = " << i << ", j = " << j << endl;

		char x = 'A';
		char y = 'Z';
		cout << "Before " << "x = " << x << ", y = " << y << endl;
		myswap(x, y);
		cout << "After " << "x = " << x << ", y = " << y << endl;
	}

	// Ŭ���� ���ø� 1
	if (0)
	{
		//MyData a;
		MyData<int> b(10);
		cout << b.GetData() << endl;
		b.SetData(100);
		cout << b.GetData() << endl;

		MyData<double> c(10.6);
		cout << c.GetData() << endl;
		c.SetData(100.9);
		cout << c.GetData() << endl;
	}

	// Ŭ���� ���ø� 2
	if (0)
	{
		vector<int> vec(3);
		vec[0] = 10;
		vec[1] = 20;
		vec[2] = 30;

		for (auto& x : vec)
			cout << x << endl;

		cout << vec.size() << endl;

		vec.push_back(40);
		vec.push_back(50);

		cout << vec.size() << endl;
	}

	// Ŭ���� ���ø� 3
	if (0)
	{
		vector<USERDATA> vec(3);

		vec[0] = USERDATA{ 10, "����" };
		vec[1] = USERDATA{ 20, "ö��" };
		vec[2] = USERDATA{ 30, "�⿵" };

		for (auto& x : vec)
		{
			cout << x.age << endl;
			cout << x.name << endl;
		}

		cout << vec.size() << endl;

		vec.push_back(USERDATA{ 40, "�迬��" });
		vec.push_back(USERDATA{ 50, "ȫ�浿" });

		cout << vec.size() << endl;
	}

	// Ŭ���� ���ø� 4
	if (1)
	{
		vector<Friend> vec(3);

		vec[0] = Friend(10, "����");
		vec[1] = Friend(20, "ö��");
		vec[2] = Friend(30, "�⿵");

		for (auto& x : vec)
		{
			cout << x << endl;
		}
	}
}