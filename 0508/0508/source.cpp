#include <iostream>
#include <string>
using namespace std;

//���� ���ľ� �ǹǷ� �켱 �ּ�ó��
//class re_string
//{
//	char* data;
//	int size;
//
//public:
//	re_string() :data(NULL), size(0) {}
//	~re_string(){}
//
//	string cop(const string& other)	//���� ���� ���� ���(���� ����)
//	{
//		data = new char[other.size()];
//		strcpy(data, other.data);
//		size = other.size() + 1;
//	}
//
//	string cop2(const string& other) //���� ����
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

	delete p;	//������ ����
	//string ���� �Ҵ�(����/��ȯ)
	//stirng ��ü �� char *�� ǥ���ϴ� ���� ���� �Ҵ�(����.��ȯ)�� string class ���ο��� ��� -> ���⼭ �ڵ��� �ʿ�� ����


	string s = "123";
	int n = stoi(s.c_str());	//c_str() -> const char* ����

	//char *p1 = s.c_str();		//const ������ error(�����Ϳ� �ٲ� �� �ְԲ� �����Ұ�)
	//strcat(p1, "world");

	//const char *p1 = s.c_str();
	//strcat(p1, "world");		// char * �� �ƴ� const char *�̹Ƿ� error
	
	//������ �̸� ������ �� �ֵ��� const ����(c_str)

	string str;
	string address("seoul");
	string copyAddress(address);	//���� ������	//address�� ���ڿ��� ������ ��Ʈ�� ��ü ����	//���� ������ ����
	//���� ���� -> ���� ����/���� ����
	// ���� ���� :: �ּҰ��� ������. �������� �������� ��ȭ�� ������ �ް� �Ҿ�����. ���������� ���� ���� �� �⺻ ������
	// ���� ���� :: ���� �Ҵ��� ���� ���� ���� ������. �������� ���� �������� ��ȭ�� ������ ���� ������ ����

	
	char text[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	string title(text); //���ڿ��� ���� ��Ʈ�� ��ü ����

	cout << str << endl << address << endl << copyAddress << endl << title << endl;



	//cin << ~~~~ << ~~~ �� getline():: ����Լ�
	//getline() :: �����Լ�

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