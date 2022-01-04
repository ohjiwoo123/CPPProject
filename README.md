# CPPProject
## C++
## 객체 지향 언어 C++
- 애초에 객체지향이라는 단어는 C에서 C++로 넘어가면서 생겨났다고 한다. 이후에 Java와 Python 등 생산성이 좋은 언어들이 생겨났는데 모두 객체지향언어이다.
- 객체 지향 프로그래밍 OOP (Object Oriented Programming) 

---

## C에서 C++로 가면서 달라진 것들  
1 C의 기능을 그대로 제공  
2 변수의 문중 선언 가능  
3 동적 메모리 관련 연산자  
4 엄격한 형 검사  
5 참조에 의한 인자 전달(레퍼런스)  
6 인라인 함수 
7 함수 오버로딩 가능  
8 디폴트 인자 등등  

```

```
---

## 객체 지향 언어의 특징
1 캡슐화(encapsulation)  
- 정보 은닉 (약속된 부분과 약속되지 않은 부분, 약속되지 않은 부분은 숨긴다.)  

2 상속성(Inheritance)  
- 기존 클래스를 토대로 새로운 클래스를 만드는 것.  

3 다형성(Polymorphism)  
- 서로 다른 객체를 동일한 방식으로 다룰 수 있는 기능.  
같은 명령을 받지만 다른 방식으로 명령을 수행할 수 있다.(Overriding)

---

## 함수의 인자 전달 방법
1 값에 의한 전달 (Passing by Value)  
```
Void Swap(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;
}
int main()
{
  int a,b;
  cin >> a >> b;
  Swap(a,b);
  cout << a << b;
}
```
2 포인터(주소)에 의한 전달 (Passing by Pointer)  
```
Void Swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
int main()
{
  int a,b;
  cin >> a >> b;
  Swap(&a,&b);
  cout << a << b;
}
```
3 레퍼런스(별명)에 의한 전달(Passing by reference)
```
Void Swap(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}
int main()
{
  int a,b;
  cin >> a >> b;
  Swap(a,b);
  cout << a << b;
}
```

## 객체의 LifeTime
- 생성자와 소멸자  

1 생성자(Constructor)  
- 생성자는 객체가 만들어 질 때 자동으로 호출 된다.  
- 여러 개의 생성자를 만들 수 있다.(오버로딩 가능)  

2 소멸자(Destructor)  
- 객체가 없어 질 때, 자동으로 호출 된다.  
- 오버로딩이 불가능하다.  
