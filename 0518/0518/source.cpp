//오버로딩(Overloading) :: 하나를 여러 용도로 사용하는 방식. 여러 인자를 여러 번 적재시키는 것. ex) x를 여러 사용 목적으로 여러 번 불러오는 것 (중복적)
//오버라이딩(Overriding) :: 같은 것을 다르게 구현하는 방식. ex) 기능 f에 대해 여러 가지 인자를 불러오는 것(대체)(중복적 x, 변칙적)


//이름이 같아도 입력 변수 시퀀스가 다르면 다른 함수 취급한다. 
//리턴 타입 및 입력 변수 이름은 중복 함수에 고려되지 않는 조건이다.

//static :: C에서 함수 중복 만드는 꼼수로 쓰기도 했음
//static 변수/함수 는 멤버 변수/함수와 관계없음. 이미 존재하는 것
//static 변수/함수는 static임을 알려주기 위해 대문자를 사용하는 경우가 대부분
//static 은 밖에다 정의를 해줘야 됨(선언x)
#include <iostream>

using namespace std;
double sum(int a, double b)
{
	return a + b;
}

int main()
{
	cout << sum(2,6) << endl; //자동으로 typeCasting (좋은 방법은 아님(애매한 경우 발생))
	return 0;
}