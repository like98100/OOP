#include <iostream>

using namespace std;

class Circle
{
	int r;

public:
	Circle() :r(0) {};
	Circle(int ra) : r(ra) {};
	~Circle() {};


	int getRadius()
	{
		return r;
	}
	void setRadius(int ra)
	{
		r = ra;
	}
};

void increase(Circle& c)
{
	int radius = c.getRadius();
	c.setRadius(radius + 1);
}


class Ci2
{
	int ra;
public:
	Ci2() {}
	Ci2(int rad)
	{
		ra = rad;
	}
	~Ci2() {}
};

Ci2 getCircle()
{
	Ci2 tmp(30); return tmp; // �ӽ� ���� ȣ��
}

int main()
{
	Circle waf(30);
	increase(waf);
	cout << waf.getRadius() << endl;


	Ci2 c;	c = getCircle();
	//���� ������ �Լ��� �� �� ȣ��(�ӽ�, c) 
	return 0;
}