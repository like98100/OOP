#include <iostream>

using namespace std;
//���� ���� :: ���� ������ ��
//���� ���� :: �� ������ ��


// static :: ����� �κп����� �ִٰ� �Ǵ�
// static �������� :: ����� ���Ͽ����� Ȯ�ΰ���
// static �������� :: ����� �Լ������� Ȯ�ΰ���, �Լ� ȣ�� ������ �����ϸ�, ���� �Ŀ��� ���� �޸𸮿� ��������.
// class�� static :: ����� Ŭ���������� Ȯ�ΰ���, ��üȭ ��Ű�� �ʾƵ� �̹� ������.


class Circle {

	int radius;

public:
	Circle();
	Circle(int ra);
	~Circle();
};

Circle::Circle()
{

}

Circle::~Circle()
{

}

Circle::Circle(int ra) : radius(ra)
{
	//radius = ra;
}

int main()
{
	//class�� reference[n](num) -> error
	
	Circle arr[3]; // ������ �� �� ȣ��

	Circle* arr_circle[10000000];	// ������ x(��������)
	for (int i = 0; i < 10000000; i++)
	{
		arr_circle[i] = new Circle(i); // �޸� �����Ҵ�
	}

	for (int i = 0; i < 10000000; i++)
	{
		delete arr_circle[i]; // ������ȯ
	}


	////���� 1
	//int n;
	//int *p = &n;
	//delete  p; // ����ð� ����
	//// ������ p�� ����Ű�� �޸𸮴� ���� �Ҵ���� ���� �ƴ�
	////���� 2
	//int *p = new int; // ���� �Ҵ�
	//delete p;		  // ����
	//delete p;		  // ����ð� ����, �̹� ��ȯ�� �޸𸮸� �ߺ� ��ȯ�� �� ����
	
	
	//�迭 ��ȯ another
	int *p = new int[5];

	for(int i = 0; i < 5; i++)
	{
		p[i] = i;
	}
	
	delete [] p;
	return 0;
}