#include <iostream>

using namespace std;

class Circle {
	int  radius;

public:
	//Circle();
	//Circle(int r);
	Circle(float radius);
	~Circle();
};

//Circle::Circle()
//{
//	radius = 1;
//	Circle * r= new Circle(1); <-- ���� �ȵ� 1(������ �ִ� ����(������)���� new�� �� ������ ������� ��
//  this = new Circle(1);		<-- ���� �ȵ� 2(this�� readonly)
//}
//
//Circle::Circle(int r) : radius(r)
//{
//}

//Circle::Circle() : Circle(1)
//{
//}

//Circle::Circle(int r = 1) : radius(r)
//{
//}

Circle::Circle(float radius) : Circle((int)radius)
{

}

Circle::~Circle()
{

}

class String
{
	char *data;
public:
	String() : data(new char[100])
	{
		//data = new char[100];
		//data = (char *)malloc(sizeof(char) * sizeof + 100);
	}
	~String()
	{
		if (data) {
			free(data);
			data = nullptr;
		}
	}
};



int c;

int a(int b = 1) // default value
{
	c = b;
	return c;
}

int d = a();






int main()
{
	return 0;
}