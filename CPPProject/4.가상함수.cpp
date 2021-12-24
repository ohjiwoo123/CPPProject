#include <iostream>

using namespace std;

class Animal
{
public:
	// ���� �Լ� 
	virtual void Cry(){ cout << "���" << endl; }

	// ���������Լ� (Pure virtual)
	// �ڽĵ��� ������ Cry �Լ��� ������ �Ѵ�.
	// virtual void Cry() = 0;
};

class Dog : public Animal
{
public:
	void Cry() { cout << "�۸�" << endl; }
};

class Cat : public Animal
{
public:
	void Cry() { cout << "�߿˾߿�" << endl; }
};

class Cow : public Animal
{
// public:
	// void Cry() { cout << "����" << endl; }
};

int main()
{
	// ������ (by ������)
	if (0)
	{
		Cat c;
		c.Cry();

		Dog d;
		d.Cry();

		Cow w;
		w.Cry();
	}

	// �����Լ� (Virtual Function)
	if (0)
	{
		int num;
		cout << "ĳ������ ��ȣ�� ������ :" << endl;
		cin >> num;
		
		Animal *p = NULL;

		switch (num)
		{
		case 0: p = new Dog; break;
		case 1: p = new Cat; break;
		case 2: p = new Cow; break;
		}

		p->Cry();
		delete p;
	}

	if (1)
	{
		Animal a;
		a.Cry();

		Dog d;
		d.Cry();

		Animal* p;
		p =&d;
		p->Cry();

	/*	Dog* pp;
		pp = &a;
		pp->Cry();*/
	}
}