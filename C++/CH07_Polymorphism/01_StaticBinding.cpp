#include <iostream>

using namespace std;

//추상클래스
class A {
public:
	void show() { cout << "A클래스입니다." << endl; }
};
class B : public A {
	void show() { cout << "B클래스입니다." << endl; }
};
//자식 클래스에서 맴버 함수를 재정의하는 것은 ㄱㅊ
//but 포인터변수를 이용할 땐 아님
int main(void) {
	A* p;
	A a;
	B b;
	p = &a; p->show();
	p = &b; p->show(); //B클래스 함수를 불렀으나 여전히 A클래스의 show()함수 호출
	system("pause");
}