#include <iostream>
#include <string>

using namespace std;
//������ �����ε��� ����Ģ
//���� �����ϴ� ������ +,-,*,/ �� ��� ����
//�ɹ�������(.), �������� ������(::) �����ε� �Ҵ�
//�⺻���� �������� ��Ģ�� ������� ��
//�����ε��� �� �������� �ǿ����� �� �ϳ��� ����� ���� �ڷ����̾�� ��

class Person {
private:
	string name;
public:
	Person() { name = "�Ӳ���"; }
	Person(string name) : name(name) { }
	Person operator +(const Person& other) { return Person(name + " & " + other.name); }
	void showName() { cout << "�̸�: " << name << "\n"; }
};

int main(void) {
	Person person1;
	Person person2("�̰���");
	Person result = person1 + person2;
	result.showName();
	system("pause");
}