#include <iostream>
#include <string>

using namespace std;

class Student { //Ŭ���� �ȿ� �ִ� �͵��� ���
private: //Ŭ����,�ɹ����� ���ο����� Ȱ��, �ܺο��� ����X
	string name;  //��� ������ �Ӽ� or ������Ƽ(property)
	int score;
public: //Ŭ����,�ɹ����� �ܺη� ����, ��𼭵� ����O
	Student(string n, int s) { name = n; score = s; } //��� �Լ��� �޼ҵ�� �θ�
	void show() { cout << name << " : " << score << "��\n"; }
};

int main(void) {
	Student a = Student("�̰���", 100); //Ŭ������ Ȱ���Ͽ� ���� ������ �ν��Ͻ�
	a.show();
	system("pause");
}