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
//	Circle * r= new Circle(1); <-- 말도 안됨 1(공간이 있는 상태(생성자)에서 new로 또 공간을 만들려고 함
//  this = new Circle(1);		<-- 말도 안됨 2(this는 readonly)
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