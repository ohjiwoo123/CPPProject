#include <iostream>

using namespace std;
#include "Ex_String.h"

MyString::MyString() // 기본 생성자
	:m_pszData(NULL),m_nLength(0) // 위에서 변수 초기화 할 때는 괄호로 한다. 
{
	// this -> 생략되어있음
	cout << "기본 생성자" << endl;
	m_pszData = NULL;
	m_nLength = 0;
}

MyString::MyString(const char* pszParam) // 변환 생성자
	:MyString()
{

	cout << "변환 생성자" << endl;
	SetString(pszParam);
}

MyString::MyString(const MyString& pszParam) // 복사 생성자
	:MyString()
{
	cout << "복사 생성자" << endl;
	SetString(pszParam.GetString());
}

MyString::~MyString() // 기본 소멸자
{
	cout << "기본 소멸자(끝)" << endl;
	Release();
}

int MyString::SetString(const char* pszParam)
{
	// 1. 입력글자의 길이를 구한다.
	cout << "(set 전에 Release)" << endl;
	Release();

	int nLength = strlen(pszParam);
	if (pszParam == 0) return 0;
	// 2. 그 길이만큼 동적메모리를 할당한다. (char)
	m_pszData = new char[nLength + 1];
	// 3. 입력글자를 동적메모리에 복사한다.
	strcpy_s(m_pszData,sizeof(char) *(nLength+1),pszParam);
	// 4. 문자열의 길이를 멤버 변수에 셋팅한다.
	m_nLength = nLength;
	return 0;
}

const char * MyString::GetString() const
{
	return m_pszData;
}

void MyString::Release() // 동적 메모리 해제 함수 
{
	if (m_pszData != NULL)
		delete[] m_pszData;
	m_nLength = 0;
}

MyString& MyString::operator=(const MyString& right)
{
	this->SetString(right.GetString());
	return *this;
}

int FunnyString::SetString(const char* pszParam)
{
	int nResult;
	if (strcmp(pszParam, "바보") == 0)
		nResult = MyString::SetString("천재");
	else
		nResult = MyString::SetString(pszParam);

	return nResult;
}