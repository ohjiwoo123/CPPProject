#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 템플릿 (=모양자)
// 1) 함수 템플릿
// 2) 클래스 템플릿

typedef struct USERDATA {
	int age;
	string name;
}; USERDATA;




class Friend
{
	int age;
	string name;

public:
	Friend(int a, string n) { age = a;  name = n; }
	void PrintData()
	{
		cout << name << ", " << age << "세" << endl;
	}
};


template <typename T> T add(T a, T b) // 함수 템플릿, 제너릭 프로그래밍
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
	cout << "불린 횟수 : " << count << endl;

	return a > b ? a : b;
}

template <typename T> void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


template <typename T>
class MyData
{
private:
	T m_Data;
public:
	MyData() { m_Data = 0; }
	MyData(T a) { m_Data = a; }
	// MyData(T a) { m_Data = a; }
	~MyData() {}
	T GetData() { return m_Data; }
	T SetData(T a) { m_Data = a; }
};

//class Freinds 
//{
//private:
//	int m_Data;
//public:
//	MyData() { m_Data = 0; }
//	MyData(int a) { m_Data = a; }
//	~MyData() {}
//	int GetData() { return m_Data; }
//	void SetData(int a) { m_Data = a; }
//}; 

int main()
{
	// 함수 템플릿 1
	if (0)
	{
		cout << add(10, 20) << endl;
		// 컴파일러가 저절로 int를 처리하는 add함수 생성
		cout << add(10.5, 20.5) << endl;
		// 컴파일러가 저절로 double을 처리하는 add함수 생성

		string a = "대한민국";
		string b = "만세";
		cout << add(a, b) << endl;
		// 컴파일러가 저절로 string을 처리하는 add함수 생성
	}

	// 함수 템플릿 2
	if (0)
	{
		cout << mymax(10, 20) << endl; // int
		cout << mymax(30, 40) << endl; // int
		cout << mymax(100, 300) << endl;

		cout << mymax(10.5, 20.6) << endl;
		cout << mymax(1.5, 2.6) << endl;
		cout << mymax('a', 'c') << endl;

		//----------------------------------
		// 템플릿 명시적 지정
		cout << mymax<int>(10.5, 20.6) << endl;
		cout << mymax<double>(10.5, 20.6) << endl;
	}

	// 함수 템플릿 3
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

	// 클래스 템플릿 1
	if (0)
	{
		MyData<int> a;

		MyData<int> b(10);
		cout << b.GetData() << endl;
		b.SetData(100);
		cout << b.GetData() << endl;

		MyData<double> c;
		MyData<double> d(10.22);
		cout << d.GetData() << endl;
		d.SetData(100.22);
		cout << d.GetData() << endl;
	}

	// STL (Standard Template Library)
	// 클래스 템플릿 2
	// array, vector, list 
	if (0)
	{
		vector<double> vec(3);
		vec[0] = 10.22;
		vec[1] = 20;
		vec[2] = 30;

		// 범위 기반 for문
		for (int x : vec)
			cout << x << endl;

		for (auto& x : vec)
			cout << x << endl;

		cout << vec.size() << endl;

		vec.push_back(40);
		vec.push_back(50);

		cout << vec.size() << endl;
	}

	// 클래스 템플릿 3
	if (0)
	{
		vector<USERDATA> vec(3);

		vec[0] = USERDATA{ 10,"영희" };
		vec[1] = USERDATA{ 10,"철수" };
		vec[2] = USERDATA{ 10,"기영" };

		for (auto& n : vec)
		{
			cout << n.age << '\t';
			cout << n.name << '\t';
			cout << endl;
		}
		cout << vec.size() << endl;

		vec.push_back(USERDATA{ 10,"민철" });
		vec.push_back(USERDATA{ 10,"흑구" });
		cout << vec.size() << endl;
	}

	if (1)
	{
		vector<Friend> vec(3);
		vec[0] = Friend(10, "영희");
		vec[1] = Friend(10, "철순");
		vec[1] = Friend(10, "철구");

		//for (int i; i < vec.size();i++)
		//{
		//	vec[i].PrintData();
		//}
		for (auto& x: vec)
		{
			cout << x.PrintData() << endl;
		}
	}

	// STL 
	if (0)
	{

		std::vector<int> a;
			cout << a.size() << endl;
		a.resize(5);
		cout << a.size() << endl;

		for (int i = 1; i < a.size(); i++)
		{
			a[i] = i;
		}
		for (auto& n : a)
			cout << n << endl;

		//reverse(a,a);

		//for (auto& n : a)
		//	cout << n << endl;

	}
}
