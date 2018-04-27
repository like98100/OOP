#include <iostream>

using namespace std;
//정적 선언 :: 스택 공간에 들어감
//동적 선언 :: 힙 공간에 들어감


// static :: 선언된 부분에서만 있다고 판단
// static 전역변수 :: 선언된 파일에서만 확인가능
// static 지역변수 :: 선언된 함수에서만 확인가능, 함수 호출 전부터 존재하며, 종료 후에도 값이 메모리에 남아있음.
// class에 static :: 선언된 클래스에서만 확인가능, 객체화 시키지 않아도 이미 존재함.


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
	//class명 reference[n](num) -> error
	
	Circle arr[3]; // 생성자 세 번 호출

	Circle* arr_circle[10000000];	// 생성자 x(포인터임)
	for (int i = 0; i < 10000000; i++)
	{
		arr_circle[i] = new Circle(i); // 메모리 동적할당
	}

	for (int i = 0; i < 10000000; i++)
	{
		delete arr_circle[i]; // 공간반환
	}


	////주의 1
	//int n;
	//int *p = &n;
	//delete  p; // 실행시간 오류
	//// 포인터 p가 가리키는 메모리는 동적 할당받은 것이 아님
	////주의 2
	//int *p = new int; // 동적 할당
	//delete p;		  // 정상
	//delete p;		  // 실행시간 오류, 이미 반환한 메모리를 중복 반환할 수 없음
	
	
	//배열 반환 another
	int *p = new int[5];

	for(int i = 0; i < 5; i++)
	{
		p[i] = i;
	}
	
	delete [] p;
	return 0;
}