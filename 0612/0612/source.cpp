#include <iostream>

using namespace std;
//virtual function
//���� �Ҹ��ڴ� ������ virtual�̾�� ��
//���� �Լ� ������(�ߺ�����) : �������̵�
//���� Ÿ���̳� ������ �ٸ����� �̸��� ���� �Լ����� �ߺ� ���� : �����ε�
//�⺻ Ŭ������ ���� �Լ��� �Ļ� Ŭ�������� �̸�, �Ű� ���� Ÿ�԰� ����, ���� Ÿ�Ա��� �Ϻ��� ���� �������� ���ۼ� : �������̵�
//�⺻ Ŭ������ ��� �Լ��� �Ļ� Ŭ�������� �̸�, �Ű� ���� Ÿ�԰� ����, ���� Ÿ�Ա��� �Ϻ��� ���� �������� ���ۼ� : �׳� �Լ� ������
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

	virtual void draw() = 0; //���� ���� �Լ�(��üȭ��Ű�� ���ϰ� �ϱ� ����)(��ü�� ����)


	//void paint()
	//{
	//	draw();
	//}

	static void paint(GameObject* g)
	{
		if (!g) return;
		g->draw();
		//g->(GameObject::draw());	//���� ���� �Լ��� ������ �Ұ����ϴ�
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
	delete pb;// Base �Ҹ��ڸ� �����ϴ� ~Base();�� �޸� ���� �Ҹ��ڴ� �Ļ� Ŭ������ �Ҹ��ڰ� �ڽ��� �ڵ� ���� �� �⺻ Ŭ������ �Ҹ��ڸ� ȣ���ϵ��� ������(�������ε�)

	return 0;
}