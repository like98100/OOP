#include <iostream>

using namespace std;

class Circle {
	
	int radius;
	int origin_x;
	int origin_y;

public:
	//������ �Լ��� �ϳ��� ���� ��� �⺻ �����ڸ� �ڵ����� ������ش�
	Circle();	// ������� �ʱ�ȭ�� ���ؼ� ������ ���(�⺻ ������)
	Circle(int diameter, int x, int y); // ������� �ʱ�ȭ�� ���ؼ� ������ ���
	~Circle(); // �Ҹ��� �Լ�(�⺻ �Ҹ��� �Լ��� ������)
};

Circle::Circle() : radius(1), origin_x(0), origin_y(0)
{
	//this->radius = 1;
	cout << "default constructor" << endl;
	cout << radius << ", " << origin_x << ", " << origin_y << endl;
}

Circle::Circle(int diameter, int x, int y) : radius(diameter/2), origin_x(x), origin_y(y) // ��� �ʱ�ȭ����Ʈ(this ���� �ӵ��� ����, �θ� ������ �Լ��� ȣ�� ����)
{																							// ���� ���� :: ����� �ƴ� ���� �������� �ʱ�ȭ�� ���ֱ� ����
	//this->radius = diameter/2; // ���� ��� ����/�Ű����� ���� :: this
	cout << "constructor with a single parameter" << endl;
	cout << radius << ", " << origin_x << ", " << origin_y << endl;
}

Circle::~Circle()
{
	cout << "destructor" << endl;
}

Circle* callMe()
{
	cout << "callMe() called" << endl;
	//Circle cir_First;
	//Circle cir_Second{ 100, 10, 10 };	//1�� �̻��� ������ �� �߰�ȣ ��� ����
	//Circle cir_Third = { 10, 10, 10 };	//�̷��Դ� �ǵ��� ��������

	Circle* p_first = new Circle; //������ �����̹Ƿ� new�� ������� ������ ������ �Լ��� �������� ����. �Ҹ��ڰ� ������ �ʾ� �޸� ���� ������ ����
	
	//delete p_first;	// �Ҹ��� �Լ��� �����ϱ� ���� ���
	cout << "callMe() ended" << endl;

	return p_first;
}

//Circle seCond(10,10,100); // ��û�� ��ǻ�Ͱ� �Լ���� ������ �� ����
//Circle seCond{10, 10, 100};

int main()
{
				//int num = 5;�� int num(5); �� �� ǥ�� ����
	//int num(5); // int/float/... xxx = ??? ���� =�� equal �����ڰ� �ƴ� ������ �Լ��� (�ʱ�ȭ)
	//num = 6;	// �̰��� equal ������(���� ������)�� (���)
				// �ʱ�ȭ�� ����� �ٸ���

	//char buf[100]{ "hello world" };

	cout << "main() started" << endl;
	Circle* p_fir = callMe();

	cout << "main() stopped" << endl;
	delete p_fir;
	return 0;
}