#include <iostream>

using namespace std;

//�߻�Ŭ����
class A {
public:
	void show() { cout << "AŬ�����Դϴ�." << endl; }
};
class B : public A {
	void show() { cout << "BŬ�����Դϴ�." << endl; }
};
//�ڽ� Ŭ�������� �ɹ� �Լ��� �������ϴ� ���� ����
//but �����ͺ����� �̿��� �� �ƴ�
int main(void) {
	A* p;
	A a;
	B b;
	p = &a; p->show();
	p = &b; p->show(); //BŬ���� �Լ��� �ҷ����� ������ AŬ������ show()�Լ� ȣ��
	system("pause");
}