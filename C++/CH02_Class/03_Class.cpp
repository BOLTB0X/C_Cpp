#include <iostream>
#include <string>

using namespace std;

class Student { //Ŭ���� �ȿ� �ִ� �͵��� ���
private: //Ŭ����,�ɹ����� ���ο����� Ȱ��, �ܺο��� ����X
	string name;  //��� ������ �Ӽ� or ������Ƽ(property)
	int mathScore;
	int englishScore;
	int getSum() { return englishScore + mathScore; } //��������
public: //Ŭ����,�ɹ����� �ܺη� ����, ��𼭵� ����O
	Student(string n, int e, int m) {
		name = n;
		englishScore = e;
		mathScore = m;
	} //�ɹ� ����
	void show() { cout << name << " : [�հ� " << getSum() << "��\n"; } //���� ����
};

int main(void) {
	Student a = Student("�̰���", 100,98); //Ŭ������ Ȱ���Ͽ� ���� ������ �ν��Ͻ�
	a.show();
	//cout << a.getSum(); private ���� �����ڴ� �ܺο��� ���� �Ұ�
	system("pause");
}