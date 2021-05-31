#include <iostream>
#include <string>

using namespace std;
//������ Ű���带 �̿��ϸ� Ư�� ��ü�� ��� ���(private)���� ���� ����
//ĸ��ȭ�� ���õ� �Լ��� ������� �ǵ��� �ϳ��� Ŭ�������� ���� �Ǵ�
// ���� ����Ǿ�� �ϴ� ��ɵ鵵 �ϳ��� Ŭ������ �־ �� ��ü�� ������ ����� ���� �� �ֵ��� �ϴ� ��

class Student {
private:
	int studentID;
	string name;
public:
	Student(int studentID,string name): studentID(studentID),name(name) { }
	//������ Ű������ �ٿ� private ��� ������ ����
	friend Student operator +(const Student& student, const Student& other) {
		return Student(student.studentID, student.name + " & " + other.name);
	//friend Ű���带 �̿��� �̸��� ����
	}
	void showName() { cout << "�̸�: " << name << "\n"; }
};

int main(void) {
	Student student(1, "�̰���");
	Student result = student + student;
	result.showName();
	system("pause");
}