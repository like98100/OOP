#include <iostream>
#include <string>
using namespace std;

//오류 고쳐야 되므로 우선 주석처리
//class re_string
//{
//	char* data;
//	int size;
//
//public:
//	re_string() :data(NULL), size(0) {}
//	~re_string(){}
//
//	string cop(const string& other)	//깊은 복사 구현 방법(동적 생성)
//	{
//		data = new char[other.size()];
//		strcpy(data, other.data);
//		size = other.size() + 1;
//	}
//
//	string cop2(const string& other) //얕은 복사
//	{
//		data = other.data;
//	}
//
//
//};


int main()
{
	string *p = new string("C++");
	cout << *p << endl;

	p->append(" hello");
	cout << *p << endl;

	delete p;	//공간을 없앰
	//string 동적 할당(생성/반환)
	//stirng 객체 내 char *로 표현하는 것의 동적 할당(생성.반환)은 string class 내부에서 기능 -> 여기서 코딩할 필요는 없음


	string s = "123";
	int n = stoi(s.c_str());	//c_str() -> const char* 형태

	//char *p1 = s.c_str();		//const 때문에 error(포인터에 바꿀 수 있게끔 지정불가)
	//strcat(p1, "world");

	//const char *p1 = s.c_str();
	//strcat(p1, "world");		// char * 가 아닌 const char *이므로 error
	
	//에러를 미리 방지할 수 있도록 const 구별(c_str)

	string str;
	string address("seoul");
	string copyAddress(address);	//복사 생성자	//address의 문자열을 복사한 스트림 객체 생성	//깊은 복사의 예시
	//복사 종류 -> 얕은 복사/깊은 복사
	// 얕은 복사 :: 주소값을 복사함. 빠르지만 원본값의 변화에 영향을 받고 불안정함. 개인적으로 설정 안할 시 기본 설정값
	// 깊은 복사 :: 동적 할당을 통해 값을 전부 복사함. 안정성이 좋고 원본값의 변화에 영향을 받지 않으나 느림

	
	char text[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	string title(text); //문자열을 가진 스트림 객체 생성

	cout << str << endl << address << endl << copyAddress << endl << title << endl;



	//cin << ~~~~ << ~~~ 의 getline():: 멤버함수
	//getline() :: 전역함수

	string st;
	cout << "input" << endl;

	//getline(cin, st, "\n");
	cin >> st;
	int len = st.length();

	for (int i = 0; i < len; i++)
	{
		string fir = st.substr(0, 1);
		string sub = st.substr(1, len - 1);
		st = sub + fir;
		cout << st << endl;
	}

	return 0;
}