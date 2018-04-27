#include<iostream>
using namespace std;

class Sample//보안 중시, 공개는 반드시 퍼블릭(선언필요), 멤버 변수는 반드시 비공개로 선언, 초기화는 생성자에서
{
	//비공개 멤버 선언
	int x, y;
private:
	//비공개 멤버 선언
	bool checkXY;
public:
	//공개 멤버 선언
	Sample();
	~Sample();

};

int main()
{
	Sample a;
	/*
	인라인 함수
		inline키워드로 처리
		매크로처럼 함수내의 내용이 Replace 됨.
		오버헤드 존재X.
		레커젼, 긴 함수, static, 반복문, goto문에서 사용X
		자동:클래스 선언부에 구현된 멤버함수
	*/
	/*
	구조체
		클래스와 기능적으로 동일
		C에서부터 사용했던 방식
			멤버 변수들이 노출됨
			=>클래스의 전부가 퍼블릭인 형태
		제한된 사용:정보를 그저 넣었다 뺐다 할 뿐
		정보 저장후 특수한 기능을 제공 시 클래스 사용
		C에서는 struct를 적어야 하나 C++에서는 아니다
	*/
	return 0;
}