#include <iostream>

using namespace std;
//virtual function
//가상 소멸자는 무조건 virtual이어야 함
//가상 함수 재정의(중복정의) : 오버라이딩
//변수 타입이나 개수가 다르지만 이름이 같은 함수들이 중복 적용 : 오버로딩
//기본 클래스의 가상 함수를 파생 클래스에서 이름, 매개 변수 타입과 개수, 리턴 타입까지 완벽히 같은 원형으로 재작성 : 오버라이딩
//기본 클래스의 멤버 함수를 파생 클래스에서 이름, 매개 변수 타입과 개수, 리턴 타입까지 완벽히 같은 원형으로 재작성 : 그냥 함수 재정의
class Base
{
public:
	virtual ~Base() {};
};
class Derived : public Base
{
public:
	virtual ~Derived() {};
};


class GameObject
{
public:
	//virtual void draw()
	//{
	//	cout << "Initiating" << endl;
	//}

	virtual void draw() = 0; //순수 가상 함수(객체화시키지 못하게 하기 위해)(실체가 없음)


	//void paint()
	//{
	//	draw();
	//}

	static void paint(GameObject* g)
	{
		if (!g) return;
		g->draw();
		//g->(GameObject::draw());	//순수 가상 함수기 때문에 불가능하다
	}
};

class Player :public GameObject
{
public:
	void draw()
	{
		cout << "Draw Player" << endl;
	}
};

class Enemy :public GameObject
{
public:
	void draw()
	{
		cout << "Draw Enemy" << endl;
	}
};

class Bullet :public GameObject
{
public:
	void draw()
	{
		cout << "Fire at will" << endl;
	}
};

//
//void paint(Shape *p)
//{
//	p->draw();
//	free;
//}


//void paint(Rect* pr)
//{
//	if (pr == nullptr) return;
//	pr->draw();
//}
//
//void paint(Circle* pc)
//{
//	if (pc == nullptr) return;
//	pc->draw();
//}
//
//void paint(Line* pl)
//{
//	if (!pl) return;
//	pl->draw();
//}

//void paint(GameObject* g)
//{
//	if (g == nullptr) return;
//	g->draw();
//}

int main(void)
{
	//paint(new Shape());
	//paint(new Circle());
	//paint(new Rect());
	//paint(new Line());
	Bullet b;
	Enemy e;
	Player p;
	//GameObject s;

	//paint(&s);	

	//paint(&p);	paint(&e);	paint(&b);

	//GameObject::paint(&p);
	//GameObject::paint(&e);
	//GameObject::paint(&b);
	p.paint(&p);
	p.paint(&e);
	e.paint(&e);
	b.paint(&b);

	Base *pb = new Derived();
	delete pb;// Base 소멸자만 실행하는 ~Base();와 달리 가상 소멸자는 파생 클래스의 소멸자가 자신의 코드 실행 후 기본 클래스의 소멸자를 호출하도록 컴파일(동적바인딩)

	return 0;
}