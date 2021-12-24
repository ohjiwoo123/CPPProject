#include <iostream>

using namespace std;

class Animal
{
public:
	// 가상 함수 
	virtual void Cry(){ cout << "운다" << endl; }

	// 순수가상함수 (Pure virtual)
	// 자식들은 무조건 Cry 함수를 만들어야 한다.
	// virtual void Cry() = 0;
};

class Dog : public Animal
{
public:
	void Cry() { cout << "멍멍" << endl; }
};

class Cat : public Animal
{
public:
	void Cry() { cout << "야옹야옹" << endl; }
};

class Cow : public Animal
{
// public:
	// void Cry() { cout << "음메" << endl; }
};

int main()
{
	// 다형성 (by 재정의)
	if (0)
	{
		Cat c;
		c.Cry();

		Dog d;
		d.Cry();

		Cow w;
		w.Cry();
	}

	// 가상함수 (Virtual Function)
	if (0)
	{
		int num;
		cout << "캐릭터의 번호를 고르세요 :" << endl;
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