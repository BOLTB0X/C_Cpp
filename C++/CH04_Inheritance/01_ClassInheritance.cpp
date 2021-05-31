#include <iostream>
#include <string>

using namespace std;

//�θ�Ŭ���� �����ϱ�
class Person {
private:
	string name;
public:
	Person(string name): name(name) {} //�ʱ�ȭ
	//�ɹ� ���� name�� Person���� ���� ��������
	string getName() {
		return name;
	}
	void showName() {
		cout << "�̸�: " << getName() << '\n';
	}
};
 //�ڽ�(�Ļ�)Ŭ���� ���� �� ����ϱ�
 //�ڽ� Ŭ������ �ν��Ͻ��� ���� �� ���� ���� �θ�Ŭ������ �����ڰ� ȣ��
 //���Ŀ� �ڽ�Ŭ������ �����ڰ� ȣ��
 // ������ ������ �� �ڽ�Ŭ������ ���� ȣ�� 
class Student : Person {
private:
	int studentID;
public:
	Student(int studentID, string name) : Person(name) {
		this->studentID=studentID;
	}
	//name�� ���� ������ ��� �����޾Ƽ� ���
	void show() {
		cout << "�л� ��ȣ: " << studentID << "\n";
		cout << "�л� �̸�: " << getName() << "\n";
	}
};

int main(void) {
	Student student(1, "�̰���");
	student.show();
	system("pause");
}