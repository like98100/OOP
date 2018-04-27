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
	malloc:반드시 free 사용
	동적할당(new사용):반드시 delete 사용
	배열관련 : 반드시 []사용
		객체배열 삭제시 delete[]사용 필요
	*/

	/*
	객체 포인터
		포인터:작다
	*/

	Circle donut;//스택공간
	double d = donut.getArea();

	Circle*p;//포인터 : 정의시 가리키는 존재 반드시 필요X
	p = &donut;
	d = p->getArea();

	/*
	레퍼런스 변수
		생성시 본인이 가리키는 존재 반드시 필요
		이후 대상 변경불가
		포인터와 기능 유사
		함수의 입력변수 사용시 포인터변수보다 더 편리하게 사용가능(* 등 사용필요X)
	Circle & r;:컴파일 에러
	*/
	Circle & r = donut;//Circle & r(donut);이나 Circle & r{donut};로도 표현가능

	//------------------------------------------------------------------------------
	/*
	객체 배열
		매개변수가 있는 생성자 호출 불가
		초기화 방법(그나마)
			각 원소 객체당 생성자 지정
			ex)Circle circleArr[3] = { Circle(10),Circle(20),Circle() };
			단점:개수(초기화므로 for사용불가)
	*/
	Circle c[3];//가능
	
	/*
	Circle*p[1000];
	for (int i = 0;i < 1000;i++)
		p[i] = new Circle(i);
	동적할당을 활용한 초기화
	for (int i = 0;i < 1000;i++)
		delete p[i];
	동적할당 제거
	*/
	return 0;
}