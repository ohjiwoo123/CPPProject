#include <iostream>

using namespace std;

class AAA
{
// private:
protected:
//public:
	int a;
public:
	AAA() { cout << "AAA()" << endl; } // pMem = new int[30]; }
	AAA(int a) { cout << "AAA(int)" << endl; }
	~AAA() { cout << "AAA()" << endl; } // delete[] pMem; }
};

class BBB : public AAA
{
public: 
	BBB() { cout << "BBB()" << endl; }
	BBB(int a) { cout << "BBB(int)" << endl; }
	~BBB() { cout << "BBB()" << endl; }
};

class CCC : public BBB
{
public:
	CCC() { cout << "CCC()" << endl; }
	CCC(int a): BBB(a) { cout << "CCC(int)" << endl; }
	CCC(double) { cout << "CCC(double)" << endl; }
	~CCC() { cout << "CCC()" << endl; }

	void Func() { a = 10; }
};

int main()
{
	// »ó¼Ó
	if (1)
	{
		CCC x(10);
		x.Func();
		//x.nData = 10;
	}
}