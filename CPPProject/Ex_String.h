class MyString
{
public:
	MyString(); // 기본 생성자
	MyString(const char* pszParam); // 변환 생성자 
	MyString(const MyString& pszParam); // 복사 생성자 
	~MyString(); // 소멸자 

	// 연산자 오버로딩
	// a=b; b가 인자고 a가 리턴 값
	MyString& operator=(const MyString& right);
	// operator+();
	// operator-();
private:
	char* m_pszData; // 동적 메모리(4B) --> malloc/free
	int m_nLength; // 문자열의 길이 

public:
	int SetString(const char* pszParam);
	// const Getter --> Read Only 
	const char* GetString() const;

private:
	void Release(); // 동적 메모리 해제함수 
};


class FunnyString : public MyString
{
public:
	int SetString(const char* pszParam);
};