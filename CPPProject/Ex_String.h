class MyString
{
public:
	MyString(); // �⺻ ������
	MyString(const char* pszParam); // ��ȯ ������ 
	MyString(const MyString& pszParam); // ���� ������ 
	~MyString(); // �Ҹ��� 

	// ������ �����ε�
	// a=b; b�� ���ڰ� a�� ���� ��
	MyString& operator=(const MyString& right);
	// operator+();
	// operator-();
private:
	char* m_pszData; // ���� �޸�(4B) --> malloc/free
	int m_nLength; // ���ڿ��� ���� 

public:
	int SetString(const char* pszParam);
	// const Getter --> Read Only 
	const char* GetString() const;

private:
	void Release(); // ���� �޸� �����Լ� 
};


class FunnyString : public MyString
{
public:
	int SetString(const char* pszParam);
};