#include <iostream>
#include <string>
using namespace std;
//상속을 사용하는 이유 :: 재사용성
//코드를 체계적으로 재사용 하기 위해서

//게임 제작에선 상속을 자주 사용하지는 않는 편(얕게는 사용)

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