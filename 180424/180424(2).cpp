#include<iostream>
using namespace std;
class Circle
{
	int radius;
public:
	Circle()
	{

	}
	Circle(int r)
	{

	}
	double getArea()
	{

	}
};

int main()
{
	/*
	malloc:�ݵ�� free ���
	�����Ҵ�(new���):�ݵ�� delete ���
	�迭���� : �ݵ�� []���
		��ü�迭 ������ delete[]��� �ʿ�
	*/

	/*
	��ü ������
		������:�۴�
	*/

	Circle donut;//���ð���
	double d = donut.getArea();

	Circle*p;//������ : ���ǽ� ����Ű�� ���� �ݵ�� �ʿ�X
	p = &donut;
	d = p->getArea();

	/*
	���۷��� ����
		������ ������ ����Ű�� ���� �ݵ�� �ʿ�
		���� ��� ����Ұ�
		�����Ϳ� ��� ����
		�Լ��� �Էº��� ���� �����ͺ������� �� ���ϰ� ��밡��(* �� ����ʿ�X)
	Circle & r;:������ ����
	*/
	Circle & r = donut;//Circle & r(donut);�̳� Circle & r{donut};�ε� ǥ������

	//------------------------------------------------------------------------------
	/*
	��ü �迭
		�Ű������� �ִ� ������ ȣ�� �Ұ�
		�ʱ�ȭ ���(�׳���)
			�� ���� ��ü�� ������ ����
			ex)Circle circleArr[3] = { Circle(10),Circle(20),Circle() };
			����:����(�ʱ�ȭ�Ƿ� for���Ұ�)
	*/
	Circle c[3];//����
	
	/*
	Circle*p[1000];
	for (int i = 0;i < 1000;i++)
		p[i] = new Circle(i);
	�����Ҵ��� Ȱ���� �ʱ�ȭ
	for (int i = 0;i < 1000;i++)
		delete p[i];
	�����Ҵ� ����
	*/
	return 0;
}