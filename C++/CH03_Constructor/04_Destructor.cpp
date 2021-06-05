#include <iostream>
#include <string>

using namespace std;
//�Ҹ���(Destructor)
//��ü�� ������ ������ �� �ڵ����� �����Ϸ��� �Ҹ��� �Լ��� ȣ��
//��ü ���ſ�
// ~��ȣ ���
class Character {
private:
	string name;
	int ragePoint;
	int hp;
	int damage;
public:
	Character(string name, int hp, int damage) : name(name), ragePoint(0), hp(hp), damage(damage) { } //������
	~Character() { //�Ҹ��� ����
		cout << "[��ü�� �Ҹ�˴ϴ�.]\n";
	}
	void pointUp() { ragePoint++; }
	void show() {
		cout << name << "[" << ragePoint << "] " << hp << " " << damage << '\n';
	}
};

int main(void) {
	Character* character1 = new Character("������", 10, 20);
	character1->pointUp();
	//Character character2(*character1);
	//character2.pointUp();
	character1->show();
	//character2.show();

	delete character1; //�����Ҵ��� �̿������Ƿ� ���������� �Ҹ�
//	delete character2; //�����Ҵ��� �̿����� �����Ƿ� ���� �߻�
	system("pause");
}