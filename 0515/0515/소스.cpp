#include <iostream>

using namespace std;

int *average(const int a[], int size)
{
	if (size <= 0) return nullptr;
	int sum = 0;
	for (int i = 0;i < 5;i++) sum += a[i];

	int *result = new int;
	*result = sum / size;

	return result;
}


//class A
//{
//public:
//	A& do() { return *this; }
//	A& sleep();
//	A& awake();
//	A& run();
//	A& stop();
//};

////251p~  참고
////얕은 복사
//Book(const Book& other)
//	: price(other.price),
//	pages(other.pages),
//	title(other.title),
//	author(other.author) {}
//
////깊은 복사
//Book(const Book& other)
//	: price(other.price),
//	pages(other.pages),
//	title(new char[strlen(other.title) + 1]),
//	author(new char[strlen(other.author) + 1])
//	{
//		strcpy(title, other.title);
//		strcpy(author, other.author);
//	}

int main()
{
	//예제 5-5
	int x[] = { 1,2,3,4,5 };
	int *avg;
	avg = average(x, 5);
	cout << *avg << endl;

	//참조리턴
	//A a;
	//a.sleep().awake().run().stop();

	//char a = find();
	//char &ref = find();

	//생성자 함수에서 레퍼런스 변수 쓸 때 앞에 const 붙일 것
	return 0;
}