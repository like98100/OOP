#include <iostream>

using namespace std;

struct Goblin {
    int hp;
    char name[100];
    double speed;
};

void hello(char buf[], int size);
//const                 :: 원본값을 가져와도 수정불가
void const helloGoblin(Goblin *g);

int main() 
{
    //call by value     :: 자료값 복사 후 전달
    //primitive         :: 값이 아닌 주소를 알려줌(원본 접근 가능)
    //                  -> 원본 정보 훼손 가능성 존재
    //배열 정보는 원본 정보를 넘겨줌
    //이외는 포인터를 이용해서 넘겨줌

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