#include <iostream>

using namespace std;

class Circle {
	
	int radius;
	int origin_x;
	int origin_y;

public:
	//생성자 함수가 하나도 없을 경우 기본 생성자를 자동으로 만들어준다
	Circle();	// 멤버변수 초기화를 위해서 생성자 사용(기본 생성자)
	Circle(int diameter, int x, int y); // 멤버변수 초기화를 위해서 생성자 사용
	~Circle(); // 소멸자 함수(기본 소멸자 함수만 존재함)
};

Circle::Circle() : radius(1), origin_x(0), origin_y(0)
{
	//this->radius = 1;
	cout << "default constructor" << endl;
	cout << radius << ", " << origin_x << ", " << origin_y << endl;
}

Circle::Circle(int diameter, int x, int y) : radius(diameter/2), origin_x(x), origin_y(y) // 멤버 초기화리스트(this 보다 속도가 빠름, 부모 생성자 함수에 호출 가능)
{																							// 빠른 이유 :: 사용이 아닌 생성 과정에서 초기화를 해주기 때문
	//this->radius = diameter/2; // 내부 사용 변수/매개변수 구별 :: this
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
	//Circle cir_Second{ 100, 10, 10 };	//1개 이상의 변수일 땐 중괄호 사용 가능
	//Circle cir_Third = { 10, 10, 10 };	//이렇게는 되도록 쓰지말자

	Circle* p_first = new Circle; //포인터 변수이므로 new를 사용하지 않으면 생성자 함수가 가동되지 않음. 소멸자가 생기지 않아 메모리 누수 문제가 생김
	
	//delete p_first;	// 소멸자 함수를 가동하기 위해 사용
	cout << "callMe() ended" << endl;

	return p_first;
}

//Circle seCond(10,10,100); // 멍청한 컴퓨터가 함수라고 착각할 수 있음
//Circle seCond{10, 10, 100};

int main()
{
				//int num = 5;와 int num(5); 둘 다 표현 가능
	//int num(5); // int/float/... xxx = ??? 에서 =는 equal 연산자가 아닌 생성자 함수다 (초기화)
	//num = 6;	// 이것이 equal 연산자(대입 연산자)다 (사용)
				// 초기화와 사용은 다르다

	//char buf[100]{ "hello world" };

	cout << "main() started" << endl;
	Circle* p_fir = callMe();

	cout << "main() stopped" << endl;
	delete p_fir;
	return 0;
}