#include <iostream>
#include <string>

using namespace std;
//static이랑 this는 같이 쓰지 말 것 
//class Circle
//{
//	int radius;
//	
//public:
//	Circle()
//	{
//		this->radius = 1;
//	}
//
//	Circle(int ra)
//	{
//		this->radius = ra;
//	}
//
//	~Circle()
//	{
//
//	}
//
//	void setCircle(int ra)
//	{
//		this->radius = ra;
//	}
//	void outRadius()
//	{
//		cout << radius << endl;
//	}
//};


string& return_ref_1()
{
	string test("test");

	return test;	//반환형 레퍼런스는 매우 특별한 경우 아니면 거의 안 씀
					//test는 지역변수이므로 함수가 종료된 후 소멸 -> return 해 줄 값이 없다.

	//string* str = new string("test");

	//return *str;	//동적 할당
	//				//레퍼런스 소멸 이후 주소를 가질 변수가 존재하지 않아 메모리 누수 현상이 생김
}

string return_ref()
{
	string test("test");

	return test;	//string 클래스에서 동적 해제
}

//int a,b,c;
//c = a+b; 과정에서 a+b를 바로 c에 넣는 것이 아니다
//a+b의 값을 다른 장소(d라 가정)에 저장한 후 c = d;를 하는 것. d를 보통 '중간값'이라고 한다.
//저장된 이후 d의 값은 사라진다.
//즉, 원본 값이 아니라 조금이라도 변형된다면(+-, substr, ...) 중간값을 거쳐서 들어간다.



int main()
{

	//Circle c1;
	//Circle c2(2);
	//Circle c3(3);

	//c1.outRadius();	c2.outRadius(); c3.outRadius();


	//cout << endl;

	//c2.setCircle(4);	c3.setCircle(5);
	//c2.outRadius(); c3.outRadius();


	string str = "Hello";
	str.append(" World");		//strcat와 비슷
	//str += " World";
	cout << str << endl;

	string name;
	name = return_ref();
	cout << name << endl;
	
	string& name1 = return_ref_1(); //레퍼런스 정보를 생성 즉시 집어넣어야 한다.
	cout << name1 << endl;

	return 0;
}

