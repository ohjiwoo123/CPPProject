#include <iostream>

using namespace std;
#include "Ex_String.h"

MyString::MyString() // �⺻ ������
	:m_pszData(NULL),m_nLength(0) // ������ ���� �ʱ�ȭ �� ���� ��ȣ�� �Ѵ�. 
{
	// this -> �����Ǿ�����
	cout << "�⺻ ������" << endl;
	m_pszData = NULL;
	m_nLength = 0;
}

MyString::MyString(const char* pszParam) // ��ȯ ������
	:MyString()
{

	cout << "��ȯ ������" << endl;
	SetString(pszParam);
}

MyString::MyString(const MyString& pszParam) // ���� ������
	:MyString()
{
	cout << "���� ������" << endl;
	SetString(pszParam.GetString());
}

MyString::~MyString() // �⺻ �Ҹ���
{
	cout << "�⺻ �Ҹ���(��)" << endl;
	Release();
}

int MyString::SetString(const char* pszParam)
{
	// 1. �Է±����� ���̸� ���Ѵ�.
	cout << "(set ���� Release)" << endl;
	Release();

	int nLength = strlen(pszParam);
	if (pszParam == 0) return 0;
	// 2. �� ���̸�ŭ �����޸𸮸� �Ҵ��Ѵ�. (char)
	m_pszData = new char[nLength + 1];
	// 3. �Է±��ڸ� �����޸𸮿� �����Ѵ�.
	strcpy_s(m_pszData,sizeof(char) *(nLength+1),pszParam);
	// 4. ���ڿ��� ���̸� ��� ������ �����Ѵ�.
	m_nLength = nLength;
	return 0;
}

const char * MyString::GetString() const
{
	return m_pszData;
}

void MyString::Release() // ���� �޸� ���� �Լ� 
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
	if (strcmp(pszParam, "�ٺ�") == 0)
		nResult = MyString::SetString("õ��");
	else
		nResult = MyString::SetString(pszParam);

	return nResult;
}