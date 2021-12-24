#include <iostream>
#include "Ex_String.h"
using namespace std;

int main()
{
	// C의 문자열 처리 - char[]
	if (0)
	{
		char a = 'a'; // 1 글자 --> 문자
		// char b = "a"; // 2 글자 (\n) --> 문자열
		char name[30] = "홍길동";
		printf("%s\n", name);
		
		strcpy_s(name, 30, "유재석");
		printf("%s\n", name);

	}
	// C++의 문자열 처리 
	if (0)
	{
		string a; // 초기 값 없음
		cout << a << endl;

		a = "유재석"; // 새 값 할당
		cout << a << endl;

		string b(a); // 초기값 있음
		cout << b << endl;

		string c("김수한무"); // 초기 값 있음 , 상수 문자열 
		cout << c << endl;

		c.clear();
		cout << c << endl;
	}
	// 내가 만든 MyString 객체 사용 
	if (1)
	{
		MyString a;
		// a = "손세정";
		a.SetString("홍길동");
		cout << a.GetString() << endl;

		a.SetString("유재석");
		cout << a.GetString() << endl;

		// --------------------------------
		MyString b("박명수");
		cout << b.GetString() << endl;

		// --------------------------------
		MyString c(b);
		cout << c.GetString() << endl;

		c = a; // 유재석
		cout << c.GetString() << endl;

		// FunnyString
		FunnyString z;
		z.SetString("바보");
		cout << z.GetString() << endl;
	}
}