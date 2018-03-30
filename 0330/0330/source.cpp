#include <iostream>

using namespace std;

struct Goblin {
    int hp;
    char name[100];
    double speed;
};

void hello(char buf[], int size);
//const                 :: �������� �����͵� �����Ұ�
void const helloGoblin(Goblin *g);

int main() 
{
    //call by value     :: �ڷᰪ ���� �� ����
    //primitive         :: ���� �ƴ� �ּҸ� �˷���(���� ���� ����)
    //                  -> ���� ���� �Ѽ� ���ɼ� ����
    //�迭 ������ ���� ������ �Ѱ���
    //�ܴ̿� �����͸� �̿��ؼ� �Ѱ���

    char buf[100] = "hello world!";
    hello(buf, 100);

    Goblin g = {NULL, "seagarve", NULL};
    g.hp = 100;
    //g.name = "seagarve";
    g.speed = 1.12;
    helloGoblin(&g);



    return 0;
}

void hello(char buf[], int size) {
    cout << "hello" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << buf[i] << " ";
    }
    cout << endl;
}

void const helloGoblin(Goblin *g) {
    cout << "Hello goblin" << endl;
    cout << "name :: " << g->name << endl;
    cout << "hp :: " << g->hp << endl;
    cout << "speed(human :: 1) :: " << g->speed << endl;
}