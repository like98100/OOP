#include <iostream>
#include <string>
using namespace std;
//����� ����ϴ� ���� :: ���뼺
//�ڵ带 ü�������� ���� �ϱ� ���ؼ�

//���� ���ۿ��� ����� ���� ��������� �ʴ� ��(��Դ� ���)

class Point
{
	int x; int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {};
};

class ColorPoint : public Point
{
	int x; int y;
	string color;
public:
	ColorPoint(int x, int y, const string& color): color(color), x(x), y(y), Point(x,y) {}
};
int main()
{
	cout << "";
	return 0;
}