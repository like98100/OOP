#include <iostream>
#include <string>

using namespace std;
//static�̶� this�� ���� ���� �� �� 
//class Circle
//{
//	int radius;
//	
//public:
//	Circle()
//	{
//		this->radius = 1;
//	}
//
//	Circle(int ra)
//	{
//		this->radius = ra;
//	}
//
//	~Circle()
//	{
//
//	}
//
//	void setCircle(int ra)
//	{
//		this->radius = ra;
//	}
//	void outRadius()
//	{
//		cout << radius << endl;
//	}
//};


string& return_ref_1()
{
	string test("test");

	return test;	//��ȯ�� ���۷����� �ſ� Ư���� ��� �ƴϸ� ���� �� ��
					//test�� ���������̹Ƿ� �Լ��� ����� �� �Ҹ� -> return �� �� ���� ����.

	//string* str = new string("test");

	//return *str;	//���� �Ҵ�
	//				//���۷��� �Ҹ� ���� �ּҸ� ���� ������ �������� �ʾ� �޸� ���� ������ ����
}

string return_ref()
{
	string test("test");

	return test;	//string Ŭ�������� ���� ����
}

//int a,b,c;
//c = a+b; �������� a+b�� �ٷ� c�� �ִ� ���� �ƴϴ�
//a+b�� ���� �ٸ� ���(d�� ����)�� ������ �� c = d;�� �ϴ� ��. d�� ���� '�߰���'�̶�� �Ѵ�.
//����� ���� d�� ���� �������.
//��, ���� ���� �ƴ϶� �����̶� �����ȴٸ�(+-, substr, ...) �߰����� ���ļ� ����.



int main()
{

	//Circle c1;
	//Circle c2(2);
	//Circle c3(3);

	//c1.outRadius();	c2.outRadius(); c3.outRadius();


	//cout << endl;

	//c2.setCircle(4);	c3.setCircle(5);
	//c2.outRadius(); c3.outRadius();


	string str = "Hello";
	str.append(" World");		//strcat�� ���
	//str += " World";
	cout << str << endl;

	string name;
	name = return_ref();
	cout << name << endl;
	
	string& name1 = return_ref_1(); //���۷��� ������ ���� ��� ����־�� �Ѵ�.
	cout << name1 << endl;

	return 0;
}

